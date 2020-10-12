#ifndef FunTras_hpp
#define FunTras_hpp

#include <stdio.h>
#include <cmath>

class funTras
{
private:
    static constexpr double TOLERANCE = 0.00000001;
    static const int MAXITERATION = 1000;
    static constexpr double EPS = 0.000000000000002204;
    
    static double divTInitialValue(unsigned long long a);
    
    
    
public:
    static unsigned long long factorial(int n);
    static double divT(unsigned long long a);

    static double expT(double x);
    static double expT(int x);

    static double sinT(double x);
    static double sinT(int x);

    static double cosT(double x);
    static double cosT(int x);
};

#endif /* FunTras_hpp */

