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

#define fp_Int2FP(a) ((int32)((int)(a) * (int)(1<<16)))
#define fp_Flt2FP(a) ((int32)((float)(a) * (float)(1<<16)))
#define fp_FP2Flt(a) ((float)(((float)(a)) / (float)(1<<16)))
#define fp_FP2Int(a) ((int32)((int32)(a)) / (float)(1<<16))

#define fp_fp1 (1<<16)
#define fp_fp2 (2<<16)


#define MAX_VAL 0x7FFFFFFF;
#define MIN_VAL 0x80000000;

// Lookup tables
int LOOKUP_EXP1[24] = {
    65536, 108051, 178145, 293712, 484249, 798392, 1316326, 2170254, 
    3578144, 5899363, 9726405, 16036130, 26439109, 43590722, 71868951, 
    118491868, 195360063, 322094291, 531043708, 875543058, 1443526462, 
    2147483647, 2147483647, 2147483647
};
int LOOKUP_EXP2[31] = {
    -1016, -2016, -3001, -3971, -4925, -5865, -6790, -7701, -8597, -9480, 
    -10349, -11205, -12047, -12876, -13693, -14497, -15288, -16067, -16834, 
    -17589, -18332, -19064, -19784, -20494, -21192, -21880, -22556, -23223, 
    -23879, -24525, -25160
};
int LOOKUP_EXP3[31] = {
    -32, -64, -96, -128, -160, -192, -224, -256, -287, -319, -351, -383, 
    -415, -446, -478, -510, -542, -573, -605, -637, -669, -700, -732, -764, 
    -795, -827, -858, -890, -921, -953, -985
};

int LOOKUP_LOG1[31] = {
    2017, 3973, 5873, 7719, 9515, 11262, 12965, 14624, 16242, 17821, 19364, 
    20870, 22343, 23783, 25193, 26573, 27924, 29248, 30546, 31818, -32469, 
    -31244, -30042, -28861, -27701, -26561, -25441, -24340, -23256, -22191, 
    -21142
};
int LOOKUP_LOG2[31] = {
    64, 128, 192, 256, 319, 383, 446, 510, 573, 637, 700, 764, 827, 890, 
    953, 1016, 1079, 1142, 1205, 1268, 1330, 1393, 1456, 1518, 1581, 1643, 
    1706, 1768, 1830, 1892, 1955
};
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
            printf("\t0x%X * 0x%X = 0x%X\n\n", a, b, result);
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
        printf("\t0x%X / 0x%X = 0x%X\n\n", a, b, result);
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
    fixedp absv = a;
    if (a < 0) 
    {
        if (a < -700244)
        {
            // Bount FPs < ln (0.5 / 65536) to 0
            if (a < -772244)
                return 0;
            else
                // Bount ln(0.5/65536) < FPs < ln(1.5/65536) to 1
                return 1;
        }
        absv = -a;
    } 
    else
    {
        // Bount FPs greater than ln(0.5 * 32768) to max value
        if (a > 681390)
        {
            return 0x7FFFFFFF;
        }
        absv = a;
    }
    
    fixedp im;
    unsigned int i, k;
    
    i = (unsigned int) absv;
    
    i >>= 5;
    im = (i & 31) - 1; // Use bits 5 to 14
    if (im >= 0)
    {
        k = ((fixedp) LOOKUP_EXP3[im] & 0xFFFF);
        i = i >> 5;
        im = (i & 31) - 1; // Use its 15 to 19
        if (im >= 0)
        {
            k = (((k * ((fixedp) LOOKUP_EXP2[im] & 0xFFFF)) >> 15) + 1) >> 1;
        }
    }
    else
    {
        i = i >> 5;
        im = (i & 31) - 1; // Use bits 15 to 19
        if (im >= 0)
        {
            k = ((fixedp) LOOKUP_EXP2[im] & 0xFFFF);
        }
        else
        {
            k = 0x10000;
        }
    }
    im = absv & 31; // Use bits 0 to 4
    if (im > 0)
    {
        k = (k * (0x10000 - im)) >> 15;
        k = (k >> 1) + (k & 1);
    }
    
    i = i >> 5;
    im = i & 31; // Use bits 15 to 19
    fixedp l = LOOKUP_EXP1[im];
    
    // Combine integer exponent and inverse fractional exponent
    if (a < 0)
    {
        a = (fixedp) (((int64) k << 17) / (int64)l);
    }
    else
    {
        a = (fixedp) (((int64) l << 17) / (int64)k);
    }
    return ((a + 1) >> 1);
}

fixedp fp_log(fixedp a)
{
    if (a <= 0)
    {
        return MIN_VAL;
    }
    
    // Get the MSB position
    int im, j2, j1, j3, p = -16;
    unsigned int i = (unsigned int) a;
    
    if ((i & 0xFFFF0000) > 0)
    {
        i = i >> 16;
        p += 16;
    }
    if ((i & 0x0000FF00) > 0)
    {
        i = i >> 8;
        p += 8;
    }
    if ((i & 0x000000F0) > 0)
    {
        i = i >> 4;
        p += 4;
    }
    if ((i & 0x0000000C) > 0)
    {
        i = i >> 2;
        p += 2;
    }
    if ((i & 0x00000002) > 0)
    {
        i = i >> 1;
        p += 1;
    }
    
    // Create a log based on MSB position
    int k = p * 45426;
    
    // Create 3 parts of the 15 bits after MSB
    if (p >= 0)
    {
        j3 = a >> (p + 1);
    }
    else
    {
        j3 = a << (-1 - p);
    }
    j2 = j3 >> 5;
    j1 = j2 >> 5;
    
    // Use bits MSB + 1 to MSB + 5
    im = (j1 & 31) - 1;
    if (im >= 0)
    {
        k += ((fixedp) LOOKUP_LOG1[im] & 0xFFFF);
    }
    
    // Use bits MSB + 6 to MSB + 10
    im = (j3 & 0x03E0);
    if (im >= j1)
    {
        im = im / j1;
        k += ((fixedp) LOOKUP_LOG2[im - 1] & 0xFFFF);
        im = im * j1;
    }
    else
    {
        im = 0;
    }
    // Finally use bits MSB + 11 to MSB + 16
    im = ((j3 & 0x3FF) - im) << 12;
    if (im >= j2)
    {
        i = im / j2;
        k += (i + 1) >> 1;
    }
    
    return k;
}

fixedp fp_pow(fixedp a, fixedp b)
{
    if (a <= 0)
    {
        return 0;
    }
    return fp_exp((fixedp) (((int64) fp_log(a) * (int64)b) >> 16));
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

fixedp fp_sqrt(fixedp a)
{
    if (a <= 0)
    {
        return 0;
    }
    
    // Get MSB
    int im, p = -16;
    unsigned int i, k = 0;
    i = (unsigned int) a;
    
    if ((i & 0xFFFF0000) > 0)
    {
        i = i >> 16;
        p += 16;
    }
    if ((i & 0x0000FF00) > 0)
    {
        i = i >> 8;
        p += 8;
    }
    if ((i & 0x000000F0) > 0)
    {
        i = i >> 4;
        p += 4;
    }
    if ((i & 0x0000000C) > 0)
    {
        i = i >> 2;
        p += 2;
    }
    if ((i & 0x00000002) > 0)
    {
        i = i >> 1;
        p += 1;
    }
    
    // Lookup the sqrt multiplier based on bits MSB + 0 to MSB + 3 then
    // correct odd MSB positions using sqrt(2)
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
        k = ((fixedp) LOOKUP_SQRT[im] & 0xFFFF);
        if ((p & 1) > 0)
        {
            k = ((k * 92682) >> 16);
        }
    }
    
    if ((p & 1) > 0)
    {
        k += 92682;
    }
    else
    {
        k += 0x10000;
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
    
    // Do two Newtonian square root iteration steps to increase precision
    int64 longNum = (int64)(a) << 16;
    k += (fixedp) (longNum / k);
    k = (k + (fixedp) ((longNum << 2) / k) + 2) >> 2;
    
    return (fixedp) k;
}
#endif