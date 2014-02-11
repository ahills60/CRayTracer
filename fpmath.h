/*
 *  fpmath.h
 *  Provides fixed point math functionality.
 *  Assumes 16:16 fixed point notation.
 *
 *
 *  Created on: 11 Feb 2014
 *      Author: andrew
 */

#ifndef FPMATH_H_
#define FPMATH_H_

#define CHECK_RANGE

typedef int int32;
typedef long long int int64;
typedef int32 fixedp;

fixedp fp_mult(fixedp a, fixedp b)
{
    int64 result = ((int64) a) * ((int64) b) / (int64)(1<<16);
    
#ifdef CHECK_RANGE
    if (result > (long long int) 1 << 31)
        printf("Overflow in downcast during mul %lld, %f\n", result, result/65535.0);
#endif
    
    return (int)(result);
}
#endif

fixedp fp_div(fixedp a, fixedp b)
{
    int64 result = ((int64) a * (int64)(1 << 16)) / (int64) b;
#ifdef CHECK_RANGE
    if (result > (long long int) 1 << 31)
        printf("Overflow in downcast during div %lld, %f\n", result, result/65536.0);
#endif
    return (int)(result);
}

fixedp fp_fabs(fixedp a)
{
    // XOR(a, a >> 16) - (a >> 16)
    return (a ^ (a >> 16)) - (a >> 16);
}
