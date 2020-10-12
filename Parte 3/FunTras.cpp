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

double funTras::tanT(int a)
{
    return sinT(a) * divT(cosT(a));
}

double funTras::tanT(double a)
{
    return sinT(a) * divT(cosT(a));
}

double funTras::powerT(double x, double a)
{
    int intX = (int) x;
    double floatX = x - intX;
    return funTras::powerT(intX, a) * funTras::rootT(a,divT(floatX));
}
double funTras::powerT(int x, double a)
{
    double value = 1;
    while(x > 0)
    {
        value *= a;
        x--;
    }
    return value;
}
double funTras::powerT(double x, int a)
{
    int intX = (int) x;
    double floatX = x - intX;
    return funTras::powerT(intX, a) * funTras::rootT(a,divT(floatX));
}

double funTras::powerT(int x, int a)
{
    int value = 1;
    while(x > 0)
    {
        value *= a;
        x--;
    }
    return value;
}

double funTras::rootT(int a, int p)
{
    double x = a * funTras::divT(2);
    double antX = 0;
    int iteration = 0;
    while (!(abs((x - antX)/x) < funTras::TOLERANCE) && iteration < funTras::MAXITERATION)
    {
        antX = x;
        x = x - (powerT(p, x) - a) * divT(p*x);
        iteration++;
    }
    return x;
}

double funTras::rootT(double a, int p)
{
    double x = a * funTras::divT(2);
    double antX = 0;
    int iteration = 0;
    while (!(abs((x - antX)/x) < funTras::TOLERANCE) && iteration < funTras::MAXITERATION)
    {
        antX = x;
        x = x - (powerT(p, x) - a) * divT(p*x);
        iteration++;
    }
    return x;
}

double funTras::sqrtT(int x)
{
    return funTras::rootT(x, 2);
}

double funTras::sqrtT(double x)
{
    return funTras::rootT(x, 2);
}
