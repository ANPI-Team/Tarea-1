from metodos_p2 import *

def probar_metodo(fun: str, m: int):
    """Prueba y despliega los resultados de la generalización
    del método de Newton Raphson indicado.

    Se debe indicar el método que se desea utiliza para la aproximación
    donde: 

        1 -- Kanwar–Tomar
        2 -- Kou–Li
        3 -- Halley
        4 -- Fang et al.

    Despliega en consola los siguientes datos:
        Función de prueba 
        Método de aproximación 
        Aproximación 
        Error

    Parámetros:
    fun     -- string que representa la función f de prueba para la aproximación 
    m       -- método de prueba (del 1 al 4 inclusive)
    """
    metodo = ""
    aprox  = 0
    error  = 0

    if m==1:
        metodo = "Kanwar–Tomar"
        (aprox, error) = newton_H_m1(fun, 2, 10 ** -5, 500)
    elif m==2:
        metodo = "Kou–Li"
        (aprox, error) = newton_H_m2(fun, 2, 10 ** -5, 500)
    elif m==3:
        metodo = "Halley"
        (aprox, error) = newton_H_m2(fun, 2, 10 ** -5, 500)
    elif m==4:
        metodo = "Fang et al."
        (aprox, error) = newton_H_m2(fun, 2, 10 ** -5, 500)
    
    print("\nGeneralizacion del metodo aproximacion Newton Raphson \n")
    print("     Funcion de prueba      -- " + fun + "\n")
    print("     Metodo de aproximacion -- " + metodo + "\n")
    print("     Aproximacion           -- " + str(aprox) + "\n")
    print("     Error                  -- " + str(error) + "\n")

probar_metodo("sin(xk)**2-xk**2+1",1)
probar_metodo("sin(xk)**2-xk**2+1",2)
probar_metodo("sin(xk)**2-xk**2+1",3)
probar_metodo("sin(xk)**2-xk**2+1",4)
