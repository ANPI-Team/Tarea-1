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
    double value = funTras::factorial(5);
    std::cout << value <<std::endl;
    
    
    std::cout << "DivT" <<std::endl;
    double valueDiv = funTras::divT(3);
    std::cout << valueDiv <<std::endl;
    
    
    
    
    
    
    
    
    
    
    return 0;
}
