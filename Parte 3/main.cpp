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
    double valuePw = funTras::powerT(0, 20);
    std::cout << valuePw <<std::endl;
    
    std::cout << "Root" <<std::endl;
    double valueRoot = funTras::rootT(4, 2);
    std::cout << valueRoot <<std::endl;
    return 0;
}
