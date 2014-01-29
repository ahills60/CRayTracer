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