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

#ifdef DEBUG
    #define CHECK_RANGE
#endif

typedef int int32;
typedef long long int int64;
typedef int32 fixedp;

#define fp_Int2FP(a) ((int32)((int)(a << 16)))
#define fp_Flt2FP(a) ((int32)((float)(a) * (float)(1<<16)))
#define fp_FP2Flt(a) ((float)(((float)(a)) / (float)(1<<16)))
#define fp_FP2Int(a) ((int32)(a >> 16)) // ((int32)((int32)(a)) / (float)(1<<16))

#define fp_fp1 (1<<16)
#define fp_fp2 (2<<16)


#define MAX_VAL 0x7FFFFFFF;
#define MIN_VAL 0x80000000;

// Sine and cosine defines
#define FP_CONST_B   83443      // A = 4 / pi
#define FP_CONST_C  -26561      // B = -4 / pi * pi
#define FP_CONST_Q   14746      // P = 0.225 or 0.775
#define FP_PI       205887      // pi
#define FP_2PI      411775      // 2 * pi
#define FP_PI_2     102944      // pi / 2

// Lookup tables
int LOOKUP_SQRT[31] = {
    1016, 2017, 3003, 3975, 4934, 5880, 6814, 7735, 8646, 9545, 10433, 
    11312, 12180, 13039, 13888, 14729, 15561, 16384, 17199, 18006, 18806, 
    19598, 20382, 21160, 21931, 22695, 23452, 24203, 24948, 25686, 26419
};


fixedp fp_mult(fixedp a, fixedp b)
{
    int64 result = ((int64) a) * ((int64) b) / (int64)(1<<16);
    
#ifdef CHECK_RANGE
    if (result > (long long int) 1 << 31)
    {
            printf("Overflow in downcast during mult %lld, %f\n", result, result/65536.0);
            printf("\t0x%X * 0x%X = 0x%X\n\n", (unsigned int) a, (unsigned int) b, (unsigned int) result);
    }
#endif
    
    return (int)(result);
}

fixedp fp_div(fixedp a, fixedp b)
{
    int64 result = ((int64) a * (int64)(1 << 16)) / (int64) b;
#ifdef CHECK_RANGE
    if (result > (long long int) 1 << 31)
    {
        printf("Overflow in downcast during div %lld, %f\n", result, result/65536.0);
        printf("\t0x%X / 0x%X = 0x%X\n\n", (unsigned int) a, (unsigned int) b, (unsigned int) result);
    }
#endif
    return (int)(result);
}

fixedp fp_fabs(fixedp a)
{
    // XOR(a, a >> 16) - (a >> 16)
    return (a ^ (a >> 16)) - (a >> 16);
}

fixedp fp_exp(fixedp a)
{
    int t;
    int x = a;
    int y = 0x00010000;  /* 1.0 */
    
    // Bound to a maximum if larger than ln(0.5 * 32768)
    if (x > 0x000A65AE)
        return MAX_VAL;
    
    // Fix for negative values.
    if (x < 0)
    {
        x += 0xb1721; /* 11.0903 */
        y >>= 16;
    }
    
    t=x-0x58b91;   /* 5.5452 */ 
    if (t>=0) 
    {
        x=t;
        y<<=8;
    }
    t=x-0x2c5c8;   /* 2.7726 */
    if (t>=0) 
    {
        x=t;
        y<<=4;
    }
    t=x-0x162e4;  /* 1.3863 */
    if (t>=0) 
    {
        x=t;
        y<<=2;
    }
    t=x-0x0b172;  /* 0.6931 */
    if (t>=0) 
    {
        x=t;
        y<<=1;
    }
    t=x-0x067cd;  /* 0.4055 */
    if (t>=0)
    {
        x=t;
        y+=y>>1;
    }
    t=x-0x03920;  /* 0.2231 */
    if (t>=0)
    {
        x=t;
        y+=y>>2;
    }
    t=x-0x01e27;  /* 0.1178 */
    if (t>=0)
    {
        x=t;
        y+=y>>3;
    }
    t=x-0x00f85;  /* 0.0606 */
    if (t>=0)
    {
        x=t;
        y+=y>>4;
    }
    t=x-0x007e1;  /* 0.0308 */
    if (t>=0) 
    {
        x=t;
        y+=y>>5;
    }
    t=x-0x003f8;  /* 0.0155 */
    if (t>=0) 
    {
        x=t;
        y+=y>>6;
    }
    t=x-0x001fe;  /* 0.0078 */
    if (t>=0) 
    {
        x=t;
        y+=y>>7;
    }
    // This is does the same thing:
    y += ((y >> 8) * x) >> 8;
    return y;
}

fixedp fp_log(fixedp a)
{
    int t, y, x = a;
    
    if (a <= 0)
        return MIN_VAL;

    y = 0xa65af;
    if(x < 0x00008000)
    {
        x <<= 16;
        y -= 0xb1721;
    }
    if(x < 0x00800000)
    { 
        x <<= 8;
        y -= 0x58b91;
    }
    if(x < 0x08000000)
    {
        x <<= 4;
        y -= 0x2c5c8;
    }
    if(x < 0x20000000)
    {
        x <<= 2;
        y -= 0x162e4;
    }
    if(x < 0x40000000)
    {
        x <<= 1;
        y -= 0x0b172;
    }
    t = x + (x >> 1);
    if((t & 0x80000000) == 0) 
    {
        x = t;
        y -= 0x067cd;
    }
    t = x + (x >> 2);
    if((t & 0x80000000) == 0)
    {
        x = t;
        y -= 0x03920;
    }
    t = x + (x >> 3);
    if((t & 0x80000000) == 0)
    {
        x = t;
        y -= 0x01e27;
    }
    t = x + (x >> 4);
    if((t & 0x80000000) == 0)
    {
        x = t;
        y -= 0x00f85;
    }
    t = x + (x >> 5); 
    if((t & 0x80000000) == 0)
    {
        x = t;
        y -= 0x007e1;
    }
    t = x + (x >> 6); 
    if((t & 0x80000000) == 0) 
    {
        x = t;
        y -= 0x003f8;
    }
    t = x + (x >> 7);
    if((t & 0x80000000) == 0)
     {
         x = t;
         y -= 0x001fe;
     }
    x = 0x80000000 - x;
    y -= x >> 15;
    return y;
}

fixedp fp_pow(fixedp a, fixedp b)
{
    if (a <= 0)
    {
        return 0;
    }
    return fp_exp(fp_mult(fp_log(a), b));
}

int fp_powi(int a, int b)
{
    int result = 1;
    while (b)
    {
        if (b & 1)
            result *= a;
        b >>= 1;
        a *= a;
    }
    return result;
}

fixedp fp_sqrt(fixedp ina)
{
    int a = ina;
    int im, p = -16;
    int i, k = 0;
    int longNum;
    fixedp output;
    
    if (a <= 0)
    {
        return 0;
    }
    
    // Get MSB
    i = a;
    
    if (i & 0xFFFF0000)
    {
        i >>= 16;
        p += 16;
    }
    if (i & 0x0000FF00)
    {
        i >>= 8;
        p += 8;
    }
    if (i & 0x000000F0)
    {
        i >>= 4;
        p += 4;
    }
    if (i & 0x0000000C)
    {
        i >>= 2;
        p += 2;
    }
    if (i & 0x00000002)
    {
        i >>= 1;
        p += 1;
    }
    
    // Lookup the sqrt multiplier based on bits MSB + 0 to MSB + 3 then
    // correct odd MSB positions using sqrt(2). Sqrt(2) is roughly 92682
    if (p >= -11)
    {
        i = a >> (11 + p);
    }
    else
    {
        i = a << (-11 - p);
    }
    
    im = (i & 31) - 1;
    if (im >= 0)
    {
        k = LOOKUP_SQRT[im] & 0xFFFF;
        if ((p & 1) > 0)
        {
            k = k * 92682;
            if (k < 0)
            {
                k &= 0x7FFFFFFF;
                k >>= 16;
                k |= 0x8000;
            }
            else
                k = (k >> 16);
        }
    }
    
    if ((p & 1) > 0)
    {
        k += 92682; // add sqrt(2)
    }
    else
    {
        k += 0x10000; // add 1
    }
    
    // Shift the square root estimate based on the halved MSB position
    if (p >= 0)
    {
        k <<= (p >> 1);
    }
    else
    {
        k >>= ((1 - p) >> 1);
    }
    
    // // Do two Newtonian square root iteration steps to increase precision
    // int64 longNum = (int64)(a) << 16;
    // k += (fixedp) (longNum / k);
    // k = (k + (fixedp) ((longNum << 2) / k) + 2) >> 2;
    
    // longNum = a;
    /*
    printf("before: %d (a = %d)\n", k, a);
    k += a / k;
    printf("after: %d (a / k: %d)\n", k, a / k);
    k >>= 1;
    k += a / k;
    k >>= 1;
    */
    
    // Andrew special:
    output = k;
    output += fp_div(ina, output);
    k = output;
    k >>= 1;
    output = k;
    output += fp_div(ina, output);
    k = output;
    k >>= 1;
    
    // k >>= 1;
    // k = (k + ((longNum << 2) / k) + 2) >> 2;
    
    output = k;
    
    return output;
}

/* Fixed point sine */
fixedp fp_sin(fixedp a)
{
    fixedp c, absc, absa;
    
    // Ensure input within the range of -pi to pi
    if (a > FP_PI)
        a -= FP_2PI;
    if (a < -FP_PI)
        a += FP_2PI;
    
#ifdef DEBUG
    if (a > FP_PI)
        printf("Sine function out of range: 0x%X\n", a);
    if (a < -FP_PI)
        printf("Sine function out of range: 0x%X\n", a);
#endif
    
    absa = fp_fabs(a);
    
    // Use fast sine parabola approximation
    c = (fp_mult(FP_CONST_B, a)) + (fp_mult((fp_mult(FP_CONST_C, a)), absa));
    
    absc = fp_fabs(c);
    
    // Get extra precision weighting the parabola:
    c += fp_mult(FP_CONST_Q, (fp_mult(c, absc)) - c); // Q * output + P * output * abs(output)
    
    // printf("  Output: %f\n", fp_FP2Flt(output));
    
    return c;
}


/* Fixed point cosine */
fixedp fp_cos(fixedp a)
{
    // Use the sine function
    return fp_sin(a + FP_PI_2);
}

#endif
