#ifndef MATCH_MATCHGEOMETRY_HPP
#define MATCH_MATCHGEOMETRY_HPP

#include "nitro/types.h"
#include "match/Match.hpp"

// Geometry on the field: segments, rectangles, directions
// (the other functions are declared by their users, with their types, for now)

// do the segments a and b ({x0, y0, x1, y1}) cross? out (when not NULL) gets where
extern "C" BOOL func_02083afc(fx32 *a, fx32 *b, MatchPoint *out);

#endif // MATCH_MATCHGEOMETRY_HPP
