//
//  main.cpp
//  Parte 3
//
//  Created by Gabriel Abarca Aguilar on 10/10/20.
//

#include <iostream>
#include "FunTras.hpp"

int main(int argc, const char * argv[]) {
    
    // funTras *pfun = new funTras();
    
    std::cout << "Factorial" <<std::endl;
    double valueFct = funTras::factorial(5);
    std::cout << valueFct <<std::endl;
    
    
    std::cout << "DivT" <<std::endl;
    double valueDiv = funTras::divT(3);
    std::cout << valueDiv <<std::endl;
    double valueDiv2 = funTras::divT(0.5);
    std::cout << valueDiv2 <<std::endl;
    
    std::cout << "ExpT" <<std::endl;
    double valueExp = funTras::expT(3);
    std::cout << valueExp <<std::endl;
    
    std::cout << "SinT" <<std::endl;
    double valueSin = funTras::sinT(3.145/2);
    std::cout << valueSin <<std::endl;
    
    std::cout << "CosT" <<std::endl;
    double valueCos = funTras::cosT(0);
    std::cout << valueCos <<std::endl;
    
    std::cout << "TanT" <<std::endl;
    double valueTan = funTras::tanT(0);
    std::cout << valueTan <<std::endl;
    
    std::cout << "Pw" <<std::endl;
    double valuePw = funTras::powerT(4, 2);
    std::cout << valuePw <<std::endl;
    double valuePw2 = funTras::powerT(4, 1.5);
    std::cout << valuePw2 <<std::endl;
    double valuePw3 = funTras::powerT(1.5, 2);
    std::cout << valuePw3 <<std::endl;
    double valuePw4 = funTras::powerT(1.5, 1.5);
    std::cout << valuePw4 <<std::endl;
    
    std::cout << "Root" <<std::endl;
    double valueRoot = funTras::rootT(4, 2);
    std::cout << valueRoot <<std::endl;
    
    std::cout << "Sqr" <<std::endl;
    double valueSqr = funTras::sqrtT(4);
    std::cout << valueSqr <<std::endl;
    
    std::cout << "Ln" << std::endl;
    double valueLn = funTras::lnT(2);
    std::cout << valueLn << std::endl;
    
    std::cout << "Log" << std::endl;
    double valueLog = funTras::logT(2, 2);
    std::cout << valueLog << std::endl;
    
    std::cout << "ArcSin" << std::endl;
    // double valueAsin = funTras::asinT(1);
    // std::cout << valueAsin << std::endl;
    std::cout << "Not Working jeje" << std::endl;
    
    std::cout << "ArcTan" << std::endl;
    double valueAtan = funTras::atanT(1);
    std::cout << valueAtan << std::endl;
    
    std::cout << "SinH" << std::endl;
    double valueSinH = funTras::sinhT(1);
    std::cout << valueSinH << std::endl;
    
    std::cout << "CosH" << std::endl;
    double valueCosH = funTras::atanT(1);
    std::cout << valueCosH << std::endl;
    
    std::cout << "TanH" << std::endl;
    double valueTanH = funTras::atanT(1);
    std::cout << valueTanH << std::endl;
    return 0;
}
