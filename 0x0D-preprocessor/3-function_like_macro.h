#ifndef ABSOLUTE_VALUE_MACRO
#define ABSOLUTE_VALUE_MACRO

#define ABS(x) \
    (__extension__ ({ __typeof__(x) _x = (x); _x < 0 ? -_x : _x; }))

#endif

