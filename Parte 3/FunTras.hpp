#ifndef FunTras_hpp
#define FunTras_hpp

#include <stdio.h>

class FunTras
{
private:
    static constexpr double TOLERANCE = 0.00000001;
    static const int MAXITERATION = 1000;

    static double DivAux(double x, double a, int iterations);
    static double DivAux(double x, int a, int iterations);
public:

    static double DivT(double x);
    static double DivT(int x);

    static double ExpT(double x);
    static double ExpT(int x);

    static double SinT(double x);
    static double SinT(int x);

    static double CosT(double x);
    static double CosT(int x);
};

#endif /* FunTras_hpp */

