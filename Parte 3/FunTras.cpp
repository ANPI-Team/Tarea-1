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

double funTras::divT(unsigned long long a)
{
    double x = funTras::divTInitialValue(a);
    double xNext = x * (2 - a * x);;
    int iteration = 1;
    
    while(!(abs((xNext - x)/xNext) < funTras::TOLERANCE) || iteration < funTras::MAXITERATION)
    {
        double temp = xNext;
        xNext = x * (2 - a * x);
        x = temp;
        iteration++;
    }
    return xNext;
}

double funTras::divTInitialValue(unsigned long long a)
{
    double value = 0;
    const unsigned long long FACT100 = funTras::factorial(100);
    const unsigned long long FACT80 = funTras::factorial(80);
    const unsigned long long FACT60 = funTras::factorial(60);
    const unsigned long long FACT40 = funTras::factorial(40);
    const unsigned long long FACT20 = funTras::factorial(20);
    const unsigned long long FACT0 = funTras::factorial(0);
    
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

double funTras::expT(double a)
{
    int iteration = 0;
    double antValue = 10;
    double value = 0;
    while (!((abs(value - antValue)) < funTras::TOLERANCE) && iteration < funTras::MAXITERATION)
    {
        antValue = value;
        double term = pow(a, iteration) * funTras::divT(factorial(iteration));
        value += term;

        iteration++;
    }
    return value;
}

double funTras::expT(int a)
{
    int iteration = 0;
    double antValue = 10;
    double value = 0;
    while (!((abs(value - antValue)) < funTras::TOLERANCE) && iteration < funTras::MAXITERATION)
    {
        antValue = value;
        double term = pow(a, iteration) * funTras::divT(factorial(iteration));
        value += term;

        iteration++;
    }
    return value;
}

double funTras::sinT(int a)
{
    int iteration = 0;
    double antValue = 10;
    double value = 0;
    while (!((abs(value - antValue)) < funTras::TOLERANCE) && iteration < funTras::MAXITERATION)
    {
        antValue = value;
        double term = pow(-1, iteration) * pow(a, 2*iteration+1) * funTras::divT(factorial(2*iteration+1));
        value += term;

        iteration++;
    }
    return value;
}

double funTras::sinT(double a)
{
    int iteration = 0;
    double antValue = 10;
    double value = 0;
    while (!((abs(value - antValue)) < funTras::TOLERANCE) && iteration < funTras::MAXITERATION)
    {
        antValue = value;
        double term = pow(-1, iteration) * pow(a, 2*iteration+1) * funTras::divT(factorial(2*iteration+1));
        value += term;

        iteration++;
    }
    return value;
}

double funTras::cosT(int a)
{
    int iteration = 0;
    double antValue = 10;
    double value = 0;
    while (!((abs(value - antValue)) < funTras::TOLERANCE) && iteration < funTras::MAXITERATION)
    {
        antValue = value;
        double term = pow(-1, iteration) * pow(a, 2*iteration) * funTras::divT(factorial(2*iteration));
        value += term;

        iteration++;
    }
    return value;
}

double funTras::cosT(double a)
{
    int iteration = 0;
    double antValue = 10;
    double value = 0;
    while (!((abs(value - antValue)) < funTras::TOLERANCE) && iteration < funTras::MAXITERATION)
    {
        antValue = value;
        double term = pow(-1, iteration) * pow(a, 2*iteration) * funTras::divT(factorial(2*iteration));
        value += term;

        iteration++;
    }
    return value;
}
