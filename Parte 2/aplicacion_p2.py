from sympy import *
from sympy.parsing.sympy_parser import parse_expr
import sympy

def newton_H_m1(f, x0: float, tol: float, iterMax: int):
    """Esta generalización del método aproximación Newton Raphson por
    medio del método Kanwar–Tomar implementado en la Pregunta 1 se modificó 
    para no recibir la función en formato string, sino que ya se encuentra 
    en simbólico para ser evaluada.

    Parámetros:
    fun     -- funcion a evaluar en formato simbólico 
    
    x0      -- valor inicial; se limita de manera gráfica como el alcance máximo 
                del radio por 2, por lo que el x0 <20, además el valor d no puede ser 
                negativo y también al tener un logartimo en la funcion a evaluar no permite
                ceros dentro del mismo, haciendo que el mínimo sea x0 > 1, y según 
                se observo al graficar la función gráficada el cero se encuentra cerca del 
                valor 8, haciendo que se pueda elegir un x0 menor a ese por lo que decidimos x0 = 5
                
    tol     -- tolerancia debe ser mayor a 0
    iterMax -- número máximo de iteraciones 
    
    """
    beta        = symbols("beta")
    xk          = symbols("xk")

     
    df          = diff(f)
    u           = f/df
    Hu          = 1/(1+beta*u) 

    f           = lambdify(xk, f)
    df          = lambdify(xk, df)
    u           = lambdify(xk, u)
    Hu          = lambdify((xk, beta), Hu)

    k           = 0
    x           = x0
    beta        = 0.25

    while (k < iterMax) & (abs(f(x)) > tol):
         x = x - Hu(x, beta) *f(x) / df(x)
         k+=1
    error = abs(f(x))

    return (x, error)

def fun():
    """Función donde se definen las constantes, y se generan algunas operaciones 
    que al calcularlas son constantes, además de contruir las funciones 
    dependientes de la variable.

    No recibe parámetros ya que esta función construye la función 
    """
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
    return F

def main():
    (aprox, error) = newton_H_m1(fun(), 5, 10 ** -5, 100)
    print("\nCalculo de la distancia entre dos sensores por medio del metodo aproximacion Newton Raphson \n")
    print("     Aproximacion   --   " + str(aprox) + "\n")
    print("     Error          --   " + str(error) + "\n")

main()