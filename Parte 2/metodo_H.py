from sympy import *
import sympy
from metodos_p2 import *


def fun():

    xk          = symbols("xk")
    citaDB      = 4 
    alpha       = 4        
    lamb        = 1       
    x1          = 7    
    x2          = 6   
    r           = 10  
    
    k          = 10*alpha/ln(10)
    S          = pi*r**2
    g          = (2*S/pi)*acos(xk/(2*r))-xk*sqrt(r**2-(xk**2)/4)
    citaR2     = citaDB**2/((10*alpha)**2)
    citaC2     = ((g**2)/2*lamb*k**2)*(1/g+1/S)

    F          = (log(x1/xk))/(citaR2*ln(10)) + diff(x2-xk, xk)/citaC2

    d           = newton_H_m1(str(F), 5, 10 ** -5, 100)

    return d


print(fun())

