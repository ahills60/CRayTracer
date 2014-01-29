/*
 * mathstats.h
 *
 * Creates a struct for storing math stats. This can be used to evaluate performance
 *
 *  Created on: 29 Jan 2014
 *      Author: andrew
 */

typedef struct MathStat
{
    int plus;
    int subtract;
    int multiply;
    int divide;
}
MathStat;


void initStats(MathStat *m)
{
    (*m).plus = 0;
    (*m).subtract = 0;
    (*m).multiply = 0;
    (*m).divide = 0;
}

void statPlus(MathStat *m, int a)
{
    (*m).plus += a;
}

void statSubtract(MathStat *m, int a)
{
    (*m).subtract += a
}

void statMultiply(MathStat *m, int a)
{
    (*m).multiply += a;
}

void statDivide(MathStat *m, int a)
{
    (*m).divide += a;
}

void statGroup(MathStat *m, int p, int s, int m, int d)
{
    (*m).plus += p;
    (*m).subtract += s;
    (*m).multiply += m;
    (*m).divide += d;
}