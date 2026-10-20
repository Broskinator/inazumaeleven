// MSL C functions used by the game so far
#ifndef MSL_STRING_H
#define MSL_STRING_H

#ifdef __cplusplus
extern "C" {
#endif

int strcmp(const char *s1, const char *s2);
char *strchr(const char *s, int c);
char *strrchr(const char *s, int c);

#ifdef __cplusplus
}
#endif

#endif // MSL_STRING_H
