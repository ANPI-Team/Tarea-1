#include "FunTras.hpp"
#include <stdlib.h>
#include <iostream>
#include <cmath>

unsigned long long funTras::factorial(int n)
{
    if(n < 0)
        return 0;
    else if(n > 1)
        return n*funTras::factorial(n-1);
    return 1;
    
}

double funTras::divT(int a)
{
    double x = funTras::divTInitialValue(a);
    double xNext = x * (2 - a * x);;
    int iteration = 0;
    
    while(!(abs((xNext - x)/xNext) < funTras::TOLERANCE) || iteration < funTras::MAXITERATION)
    {

        double temp = xNext;
        xNext = x * (2 - a * x);
        x = temp;
        iteration++;
    }
    return xNext;
}

double funTras::divTInitialValue(int a)
{
    double value = 0;
    const double FACT100 = funTras::factorial(100);
    const double FACT80 = funTras::factorial(80);
    const double FACT60 = funTras::factorial(60);
    const double FACT40 = funTras::factorial(40);
    const double FACT20 = funTras::factorial(20);
    const double FACT0 = funTras::factorial(0);
    
    if(FACT80 <= a &&  a <= FACT100)
        value = pow(funTras::EPS,15);
    else if(FACT60 <= a &&  a <= FACT80)
        value = pow(funTras::EPS,11);
    else if(FACT40 <= a &&  a <= FACT60)
        value = pow(funTras::EPS,8);
    else if(FACT20 <= a &&  a <= FACT40)
        value = pow(funTras::EPS,4);
    else if(FACT0 <= a &&  a <= FACT20)
        value = pow(funTras::EPS,2);
    return value;
}

