#ifndef FUNCTION_LIKE_MACRO_H
#define FUNCTION_LIKE_MACRO_H

/*
 * file: 3-function_like_macro.h
 * desc: header file that defines a function-like macro ABS(x)
 * that computes the absolute value of a number x
 */

#define ABS(x) (((x) < (0)) ? ((x) * (-1)) : (x))
#endif
