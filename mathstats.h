/*
 * mathstats.h
 *
 * Creates a struct for storing math stats. This can be used to evaluate performance
 *
 *  Created on: 29 Jan 2014
 *      Author: andrew
 */

#ifndef MATHSTATS_H_
#define MATHSTATS_H_

typedef struct MathStat
{
    long long int plusFlt;
    long long int subtractFlt;
    long long int multiplyFlt;
    long long int divideFlt;
    long long int plusInt;
    long long int subtractInt;
    long long int multiplyInt;
    long long int divideInt;
    long long int sqrtFlt;
    long long int cosine;
    long long int sine;
    long long int power;
}
MathStat;


void initStats(MathStat *m)
{
    (*m).plusFlt = 0;
    (*m).subtractFlt = 0;
    (*m).multiplyFlt = 0;
    (*m).divideFlt = 0;
    (*m).plusInt = 0;
    (*m).subtractInt = 0;
    (*m).multiplyInt = 0;
    (*m).divideInt = 0;
    (*m).sqrtFlt = 0;
    (*m).cosine = 0;
    (*m).power = 0;
    (*m).sine = 0;
}

void statPlusFlt(MathStat *m, int a)
{
    (*m).plusFlt += a;
}

void statSubtractFlt(MathStat *m, int a)
{
    (*m).subtractFlt += a;
}

void statMultiplyFlt(MathStat *m, int a)
{
    (*m).multiplyFlt += a;
}

void statDivideFlt(MathStat *m, int a)
{
    (*m).divideFlt += a;
}

void statGroupFlt(MathStat *ma, int p, int s, int m, int d)
{
    (*ma).plusFlt += p;
    (*ma).subtractFlt += s;
    (*ma).multiplyFlt += m;
    (*ma).divideFlt += d;
}

void statPlusInt(MathStat *m, int a)
{
    (*m).plusInt += a;
}

void statSubtractInt(MathStat *m, int a)
{
    (*m).subtractInt += a;
}

void statMultiplyInt(MathStat *m, int a)
{
    (*m).multiplyInt += a;
}

void statDivideInt(MathStat *m, int a)
{
    (*m).divideInt += a;
}

void statGroupInt(MathStat *ma, int p, int s, int m, int d)
{
    (*ma).plusInt += p;
    (*ma).subtractInt += s;
    (*ma).multiplyInt += m;
    (*ma).divideInt += d;
}

void statGroupAll(MathStat *m, int pf, int sf, int mf, int df, int pi, int si, int mi, int di)
{
    (*m).plusInt += pi;
    (*m).subtractInt += si;
    (*m).multiplyInt += mi;
    (*m).divideInt += di;
    (*m).plusFlt += pf;
    (*m).subtractFlt += sf;
    (*m).multiplyFlt += mf;
    (*m).divideFlt += df;
}

void statSqrtFlt(MathStat *m, int a)
{
    (*m).sqrtFlt += a;
}

void statCosine(MathStat *m, int a)
{
    (*m).cosine += a;
}

void statSine(MathStat *m, int a)
{
    (*m).sine += a;
}

void statPower(MathStat *m, int a)
{
    (*m).power += a;
}
#endif