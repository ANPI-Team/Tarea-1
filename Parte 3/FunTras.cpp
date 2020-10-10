#include "FunTras.hpp"
#include <stdlib.h>

double FunTras::DivT(double x)
{   
    return FunTras::DivAux(0.1, x, 0);
}
double FunTras::DivAux(double x, double a, int iteration)
{
    double xNext = x * (2 - a * x);
    if((abs(xNext - x) < FunTras::TOLERANCE) || iteration >= FunTras::MAXITERATION)
    {
        return x;
    }else
    {
        FunTras::DivAux(xNext,a,iteration++);
    }
    return NULL;
}
double FunTras::DivT(int x)
{   
    return FunTras::DivAux(0.1, x, 0);
}
double FunTras::DivAux(double x, int a, int iteration)
{
    double xNext = x * (2 - a * x);
    if((abs(xNext - x) < FunTras::TOLERANCE) || iteration >= FunTras::MAXITERATION)
    {
        return x;
    }else
    {
        FunTras::DivAux(xNext,a,iteration++);
    }
    return NULL;
}
