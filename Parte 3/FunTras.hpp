#ifndef FunTras_hpp
#define FunTras_hpp

#include <stdio.h>
#include <cmath>

class funTras
{
private:
    static constexpr double TOLERANCE = 10e-8;
    static const int MAXITERATION = 2500;
    static constexpr double EPS = 0.000000000000002204;
    
    static double divTInitialValue(int a);
    static double divTInitialValue(unsigned long long a);
    static double divTInitialValue(double a);
    
    static double abs(double x);
    static int abs(int x);
    static unsigned long long abs(unsigned long long x);
    
public:
    static unsigned long long factorial(int n);
    
    static double divT(unsigned long long a);
    static double divT(int a);
    static double divT(double a);

    static double expT(double x);
    static double expT(int x);

    static double sinT(double x);
    static double sinT(int x);

    static double cosT(double x);
    static double cosT(int x);
    
    static double tanT(double x);
    static double tanT(int x);
    
    static double powerT(double x, double a);
    static double powerT(int x, double a);
    static double powerT(double x, int a);
    static double powerT(int x, int a);
    static unsigned long long powerT(int x, unsigned long long a);
    
    static double rootT(int x, int a);
    static double rootT(double x, int a);
    
    static double sqrtT(int x);
    static double sqrtT(double x);
    
    static double lnT(int x);
    static double lnT(double x);
    
    static double logT(int x, int a);
    static double logT(double x, int a);
    static double logT(double x, double a);
    static double logT(int x, double a);
    
    static double asinT(int x);
    static double asinT(double x);
    
    static double atanT(int x);
    static double atanT(double x);
    
    static double sinhT(int x);
    static double sinhT(double x);
    
    static double coshT(int x);
    static double coshT(double x);
    
    static double tanhT(int x);
    static double tanhT(double x);
};

#endif /* FunTras_hpp */

