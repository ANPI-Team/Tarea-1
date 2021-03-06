#include "FunTras.hpp"
#include <iostream>

int funTras::negativeMultiplier(unsigned long long a)
{
    if (a > 0)
        return 1;
    else
        return -1;
}
int funTras::negativeMultiplier(int a)
{
    if (a > 0)
        return 1;
    else
        return -1;
}
int funTras::negativeMultiplier(double a)
{
    if (a > 0)
        return 1;
    else
        return -1;
}

double funTras::abs(double x)
{
    if(x < 0)
        return -x;
    return x;
}
int funTras::abs(int x)
{
    
    if(x < 0)
        return -x;
    return x;
}
unsigned long long funTras::abs(unsigned long long x)
{
    if(x < 0)
        return -x;
    return x;
}

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
    unsigned long long newA = abs(a);
    double x = funTras::divTInitialValue(newA);
    double xNext = x * (2 - newA * x);;
    int iteration = 1;
    
    while(!(funTras::abs((xNext - x)/xNext) < funTras::TOLERANCE) || iteration < funTras::MAXITERATION)
    {
        double temp = xNext;
        xNext = x * (2 - newA * x);
        x = temp;
        iteration++;
    }
    return  funTras::negativeMultiplier(a) * xNext;
}

double funTras::divT(int a)
{
    
    unsigned long long newA = abs(a);
    double x = funTras::divTInitialValue(newA);
    double xNext = x * (2 - newA * x);;
    int iteration = 1;
    
    while(!(funTras::abs((xNext - x)/xNext) < funTras::TOLERANCE) || iteration < funTras::MAXITERATION)
    {
        double temp = xNext;
        xNext = x * (2 - newA * x);
        x = temp;
        iteration++;
    }
    return  funTras::negativeMultiplier(a) * xNext;
}

double funTras::divT(double a)
{
    double newA = abs(a);
    double x = funTras::divTInitialValue(newA);
    double xNext = x * (2 - newA * x);;
    int iteration = 1;
    
    while(!(funTras::abs((xNext - x)/xNext) < funTras::TOLERANCE) || iteration < funTras::MAXITERATION)
    {
        double temp = xNext;
        xNext = x * (2 - newA * x);
        x = temp;
        iteration++;
    }
    return  funTras::negativeMultiplier(a) * xNext;
}

double funTras::divTInitialValue(double a)
{
    double value = 0;
    const double FACT100 = funTras::factorial(100);
    const double FACT80 = funTras::factorial(80);
    const double FACT60 = funTras::factorial(60);
    const double FACT40 = funTras::factorial(40);
    const double FACT20 = funTras::factorial(20);
    const double FACT0 = funTras::factorial(0);
    
    if(FACT80 <= a &&  a <= FACT100)
        value = funTras::powerT(15, funTras::EPS);
    else if(FACT60 <= a &&  a <= FACT80)
        value = funTras::powerT(11, funTras::EPS);
    else if(FACT40 <= a &&  a <= FACT60)
        value = funTras::powerT(8, funTras::EPS);
    else if(FACT20 <= a &&  a <= FACT40)
        value = funTras::powerT(4, funTras::EPS);
    else if(FACT0 <= a &&  a <= FACT20)
        value = funTras::powerT(2, funTras::EPS);
    else
        value = funTras::powerT(1, funTras::EPS);
    return value;
}

double funTras::divTInitialValue(int a)
{
    double value = 0;
    const unsigned long long FACT100 = funTras::factorial(100);
    const unsigned long long FACT80 = funTras::factorial(80);
    const unsigned long long FACT60 = funTras::factorial(60);
    const unsigned long long FACT40 = funTras::factorial(40);
    const unsigned long long FACT20 = funTras::factorial(20);
    const unsigned long long FACT0 = funTras::factorial(0);
    
    if(FACT80 <= a &&  a <= FACT100)
        value = funTras::powerT(15, funTras::EPS);
    else if(FACT60 <= a &&  a <= FACT80)
        value = funTras::powerT(11, funTras::EPS);
    else if(FACT40 <= a &&  a <= FACT60)
        value = funTras::powerT(8, funTras::EPS);
    else if(FACT20 <= a &&  a <= FACT40)
        value = funTras::powerT(4, funTras::EPS);
    else if(FACT0 <= a &&  a <= FACT20)
        value = funTras::powerT(2, funTras::EPS);
    else
        value = funTras::powerT(1, funTras::EPS);
    return value;
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
        value = funTras::powerT(15, funTras::EPS);
    else if(FACT60 <= a &&  a <= FACT80)
        value = funTras::powerT(11, funTras::EPS);
    else if(FACT40 <= a &&  a <= FACT60)
        value = funTras::powerT(8, funTras::EPS);
    else if(FACT20 <= a &&  a <= FACT40)
        value = funTras::powerT(4, funTras::EPS);
    else if(FACT0 <= a &&  a <= FACT20)
        value = funTras::powerT(2, funTras::EPS);
    else
        value = funTras::powerT(1, funTras::EPS);
    return value;
}

double funTras::expT(double a)
{
    int iteration = 0;
    double antValue = 10;
    double value = 0;
    while (!((funTras::abs(value - antValue)) < funTras::TOLERANCE) && iteration < funTras::MAXITERATION)
    {
        antValue = value;
        double term = funTras::powerT(iteration, a) * funTras::divT(factorial(iteration));
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
    while (!((funTras::abs(value - antValue)) < funTras::TOLERANCE) && iteration < funTras::MAXITERATION)
    {
        antValue = value;
        double term = funTras::powerT(iteration, a) * funTras::divT(factorial(iteration));
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
    while (!((funTras::abs(value - antValue)) < funTras::TOLERANCE) && iteration < funTras::MAXITERATION)
    {
        antValue = value;
        double term = funTras::powerT(iteration, -1) * funTras::powerT(2*iteration+1, a) * funTras::divT(factorial(2*iteration+1));
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
    while (!((funTras::abs(value - antValue)) < funTras::TOLERANCE) && iteration < funTras::MAXITERATION)
    {
        antValue = value;
        double term = funTras::powerT(iteration, -1) * funTras::powerT(2*iteration+1, a) * funTras::divT(factorial(2*iteration+1));
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
    while (!((funTras::abs(value - antValue)) < funTras::TOLERANCE) && iteration < funTras::MAXITERATION)
    {
        antValue = value;
        double term = funTras::powerT(iteration, -1) * funTras::powerT(2 * iteration, a) * funTras::divT(factorial(2*iteration));
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
    while (!((funTras::abs(value - antValue)) < funTras::TOLERANCE) && iteration < funTras::MAXITERATION)
    {
        antValue = value;
        double term = funTras::powerT(iteration, -1) * funTras::powerT(2 * iteration, a) * funTras::divT(factorial(2*iteration));
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
    int p = (int) divT(floatX);
    return funTras::powerT(intX, a) * funTras::rootT(a, p);
}

unsigned long long funTras::powerT(int x, unsigned long long a)
{
    unsigned long long value = 1;
    while(x > 0)
    {
        value *= a;
        x--;
    }
    return value;
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
    int p = funTras::divT(floatX);
    return funTras::powerT(intX, a) * funTras::rootT(a, p);
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
    while (!(funTras::abs((x - antX)/x) < funTras::TOLERANCE) && iteration < funTras::MAXITERATION)
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
    while (!(funTras::abs((x - antX)/x) < funTras::TOLERANCE) && iteration < funTras::MAXITERATION)
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

double funTras::lnT(int a)
{
    int iteration = 0;
    double antValue = 10;
    double value = 0;
    while (!((funTras::abs(value - antValue)) < funTras::TOLERANCE) && iteration < funTras::MAXITERATION)
    {
        antValue = value;
        double term = funTras::divT(2 * iteration + 1) * funTras::powerT(2 * iteration, (a - 1) * funTras::divT(a + 1));
        value += term;

        iteration++;
    }
    return 2 * (a-1) * funTras::divT(a+1) * value;
}

double funTras::lnT(double a)
{
    int iteration = 0;
    double antValue = 10;
    double value = 0;
    while (!((funTras::abs(value - antValue)) < funTras::TOLERANCE) && iteration < funTras::MAXITERATION)
    {
        antValue = value;
        double term = funTras::divT( 2 * iteration + 1) * funTras::powerT(2 * iteration, (a - 1) * funTras::divT(a + 1));
        value += term;

        iteration++;
    }
    return 2 * (a-1) * funTras::divT(a+1) * value;
}

double funTras::logT(int x, int a)
{
    return funTras::lnT(x) * funTras::divT(funTras::lnT(a));
}

double funTras::logT(double x, int a)
{
    return funTras::lnT(x) * funTras::divT(funTras::lnT(a));
}

double funTras::logT(int x, double a)
{
    return funTras::lnT(x) * funTras::divT(funTras::lnT(a));
}

double funTras::logT(double x, double a)
{
    return funTras::lnT(x) * funTras::divT(funTras::lnT(a));
}

double funTras::asinT(int x)
{
    int iteration = 0;
    double antValue = 10;
    double value = 0;
    while (!((funTras::abs(value - antValue)) < funTras::TOLERANCE) && iteration < funTras::MAXITERATION)
    {
        antValue = value;
        double term1 = funTras::factorial(2*iteration);
        double term2 = funTras::divT(funTras::powerT(iteration, 4));
        double term3 = funTras::divT(funTras::powerT(2, funTras::factorial(iteration)));
        double term4 = funTras::divT(2*iteration+1);
        double term5 = funTras::powerT(2*iteration+1, x);

        value += term1 * term2 * term3 * term4 * term5;
        
        iteration++;
    }
    return value;
}

double funTras::asinT(double x)
{
    int iteration = 0;
    double antValue = 10;
    double value = 0;
    while (!((funTras::abs(value - antValue)) < funTras::TOLERANCE) && iteration < funTras::MAXITERATION)
    {
        std::cout << "Iteration: " << iteration << std::endl;
        antValue = value;
        
        std::cout << "Term 1";
        double term1 = funTras::factorial(2*iteration);
        std::cout << ": " << term1 << std::endl;
        
        std::cout << "Term 2";
        double term2 = funTras::divT(funTras::powerT(iteration, 4));
        std::cout << ": " << term1 << std::endl;
        
        std::cout << "Term 3";
        double term3 = funTras::divT(funTras::powerT(2, funTras::factorial(iteration)));
        std::cout << ": " << term1 << std::endl;
        
        std::cout << "Term 4";
        double term4 = funTras::divT(2*iteration+1);
        std::cout << ": " << term1 << std::endl;
        
        std::cout << "Term 5";
        double term5 = funTras::powerT(2*iteration+1, x);
        std::cout << ": " << term5 << std::endl;
        value += term1 * term2 * term3 * term4 * term5;
        
        iteration++;
    }
    return value;
}

double funTras::atanT(double x)
{
    int iteration = 0;
    double antValue = 10;
    double value = 0;
    while (!((funTras::abs(value - antValue)) < funTras::TOLERANCE) && iteration < funTras::MAXITERATION)
    {
        antValue = value;
        double term = funTras::powerT(iteration, -1) * funTras::powerT(2 * iteration + 1, x) * funTras::divT(2 * iteration + 1);
        value += term;
        
        iteration++;
    }
    return value;
}

double funTras::atanT(int x)
{
    int iteration = 0;
    double antValue = 10;
    double value = 0;
    while (!((funTras::abs(value - antValue)) < funTras::TOLERANCE) && iteration < funTras::MAXITERATION)
    {
        antValue = value;
        double term = funTras::powerT(iteration, -1) * funTras::powerT(2 * iteration + 1, x) * funTras::divT( 2 * iteration + 1);
        value += term;

        iteration++;
    }
    return value;
}

double funTras::sinhT(int a)
{
    int iteration = 0;
    double antValue = 10;
    double value = 0;
    while (!((funTras::abs(value - antValue)) < funTras::TOLERANCE) && iteration < funTras::MAXITERATION)
    {
        antValue = value;
        double term = funTras::powerT(2 * iteration + 1, a) * funTras::divT(funTras::factorial(2 * iteration + 1));
        value += term;

        iteration++;
    }
    return value;
}

double funTras::sinhT(double a)
{
    int iteration = 0;
    double antValue = 10;
    double value = 0;
    while (!((funTras::abs(value - antValue)) < funTras::TOLERANCE) && iteration < funTras::MAXITERATION)
    {
        antValue = value;
        double term = funTras::powerT(2 * iteration + 1, a) * funTras::divT(funTras::factorial(2 * iteration + 1));
        value += term;

        iteration++;
    }
    return value;
}

double funTras::coshT(int a)
{
    int iteration = 0;
    double antValue = 10;
    double value = 0;
    while (!((funTras::abs(value - antValue)) < funTras::TOLERANCE) && iteration < funTras::MAXITERATION)
    {
        antValue = value;
        double term = funTras::powerT(2 * iteration, a) * funTras::divT(funTras::factorial(2 * iteration));
        value += term;

        iteration++;
    }
    return value;
}

double funTras::coshT(double a)
{
    int iteration = 0;
    double antValue = 10;
    double value = 0;
    while (!((funTras::abs(value - antValue)) < funTras::TOLERANCE) && iteration < funTras::MAXITERATION)
    {
        antValue = value;
        double term = funTras::powerT(2 * iteration, a) * funTras::divT(funTras::factorial(2 * iteration));
        value += term;

        iteration++;
    }
    return value;
}

double funTras::tanhT(int a)
{
    return funTras::sinhT(a) * funTras::divT(funTras::coshT(a));
}

double funTras::tanhT(double a)
{
    return funTras::sinhT(a) * funTras::divT(funTras::coshT(a));
}
