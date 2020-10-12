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
    
    
    
    
    
    
    
    return 0;
}
