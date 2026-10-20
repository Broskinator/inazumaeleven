# Inazuma Eleven (Europe) decompilation
#
#   make            build the ROM and check that it matches the original
#   make progress   show how much has been decompiled
#   make setup      download the tools only
#   make clean      remove build output (keeps the extracted ROM)
#   make distclean  also remove the extracted ROM and the tools

VERSION  ?= yeep
BASEROM  := baserom_$(VERSION).nds
SHA1     := d55169c0b93d26b4037379d3b81a61b5404945e5

DSD      := tools/bin/dsd
WIBO     := tools/bin/wibo
MW       := tools/mwccarm/2.0/sp1p5
MWLD     := $(WIBO) $(MW)/mwldarm.exe
CC_VER   := dsi/1.2
MWCC     := $(WIBO) tools/mwccarm/$(CC_VER)/mwccarm.exe
export LM_LICENSE_FILE := $(CURDIR)/tools/mwccarm/license.dat

CONFIG   := config/$(VERSION)/arm9/config.yaml
EXTRACT  := extract/$(VERSION)
BUILD    := build/$(VERSION)
ELF      := $(BUILD)/arm9.o
ROM      := build/inazumaeleven_$(VERSION).nds

CFLAGS   := -O4,p -proc arm946e -enum int -Cpp_exceptions off -char signed -interworking \
            -nosyspath -i include -msgstyle gcc
export MWCIncludes := $(CURDIR)/include

C_SRCS   := $(shell find src -name '*.c' -o -name '*.cpp' 2>/dev/null)
C_OBJS   := $(patsubst %.cpp,$(BUILD)/%.o,$(C_SRCS:%.c=$(BUILD)/%.o))

LDFLAGS  := -proc arm946e -nostdlib -interworking -nodead -m Entry -map closure,unused

.PHONY: all setup check progress clean distclean
all: check

setup: $(DSD) $(WIBO) $(MW)/mwldarm.exe tools/bin/objdiff-cli
$(DSD) $(WIBO) $(MW)/mwldarm.exe tools/bin/objdiff-cli:
	sh tools/setup.sh

# 1. unpack the original ROM (code, overlays, files)
$(EXTRACT)/config.yaml: $(BASEROM) | setup
	@echo "$(SHA1)  $(BASEROM)" | sha1sum -c --quiet || (echo "$(BASEROM) is not the expected ROM"; exit 1)
	$(DSD) rom extract -r $(BASEROM) -o $(EXTRACT)

# 2. cut the code into objects (the parts not decompiled yet) and write the linker script
$(BUILD)/arm9.lcf: $(EXTRACT)/config.yaml $(shell find config/$(VERSION) -name '*.txt' -o -name '*.yaml')
	$(DSD) delink -c $(CONFIG)
	$(DSD) lcf -c $(CONFIG)

# 3. compile the decompiled code
HEADERS  := $(shell find include -name '*.h' -o -name '*.hpp')
$(BUILD)/src/%.o: src/%.c $(HEADERS) Makefile
	@mkdir -p $(dir $@)
	$(MWCC) -lang c99 $(CFLAGS) -c $< -o $@
$(BUILD)/src/%.o: src/%.cpp $(HEADERS) Makefile
	@mkdir -p $(dir $@)
	$(MWCC) -lang c++ $(CFLAGS) -c $< -o $@

# 4. link everything with the original linker
$(ELF): $(BUILD)/arm9.lcf $(C_OBJS)
	$(MWLD) $(LDFLAGS) -o $@ $(BUILD)/arm9.lcf @$(BUILD)/objects.txt

# 5. put the ROM together
$(ROM): $(ELF)
	$(DSD) check modules -c $(CONFIG)
	$(DSD) rom config -e $(ELF) -c $(CONFIG)
	$(DSD) rom build -c $(BUILD)/build/rom_config.yaml -o $@
	python3 tools/fixrom.py $@

check: $(ROM)
	@echo "$(SHA1)  $(ROM)" | sha1sum -c

# decompilation progress (objdiff); objdiff.json can also be opened in the objdiff GUI
progress: $(ELF)
	$(DSD) objdiff -c $(CONFIG) -o . -m make -M $(ELF) --skip-absent-objects
	tools/bin/objdiff-cli report generate -p . -o $(BUILD)/report.json
	@python3 tools/progress.py $(BUILD)/report.json

$(BASEROM):
	@echo "Put your ROM here as $(BASEROM) (see README.md)"; exit 1

clean:
	rm -rf build

distclean: clean
	rm -rf extract tools/bin tools/mwccarm
