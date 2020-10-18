from sympy.parsing.sympy_parser import parse_expr
from sympy import *

def newton_H_m1(fun: str, x0: float, tol: float, iterMax: int):
    """Generalización del método aproximación Newton Raphson por
    medio del método Kanwar–Tomar

    Utiliza una variante del método Newton Raphson con la función 
    de peso Hu:

        x = x + Hu(x)*(f(x)/df(x))

    Donde: 

        u  = f(x)/f'(x)
        Hu = 1/(1 + beta*u)

    Devuelve en una tupla el valor de el error y el valor de x
    donde:

        f(x) = 0

    Parámetros:
    fun     -- string que representa la función f para la aproximación 
    x0      -- valor inicial 
    tol     -- tolerancia debe ser mayor a 0
    iterMax -- número máximo de iteraciones 
    
    """
    beta        = symbols("beta")
    xk          = symbols("xk")

    f           = parse_expr(fun) 
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

def newton_H_m2(fun: str, x0: float, tol: float, iterMax: int):
    """Generalización del método aproximación Newton Raphson por
    medio del método Kou–Li 

    Utiliza una variante del método Newton Raphson con la función 
    de peso Hu:

        x = x + Hu(x)*(f(x)/df(x))

    Donde: 

        u  = f(x)/f'(x)
        Hu = 1 + (lambda*u)/(((1+beta*u)/2)*(1+2*beta*u))

    Devuelve en una tupla el valor de el error y el valor de x
    donde:

        f(x) = 0

    Parámetros:
    fun     -- string que representa la función f para la aproximación 
    x0      -- valor inicial 
    tol     -- tolerancia debe ser mayor a 0
    iterMax -- número máximo de iteraciones 
    
    """
    beta        = symbols("beta")
    lamb        = symbols("lamb")
    xk          = symbols("xk")
    
    f           = parse_expr(fun) 
    df          = diff(f)
    u           = f/df
    Hu          = 1+(lamb*u)/(((1+beta*u)/2)*(1+2*beta*u))

    f           = lambdify(xk, f)
    df          = lambdify(xk, df)
    u           = lambdify(xk, u)
    Hu          = lambdify((xk, beta, lamb), Hu)

    k           = 0
    x           = x0
    beta        = 0.25
    lamb        = 0.12

    while (k < iterMax) & (abs(f(x)) > tol):
         x = x - Hu(x, beta, lamb) *f(x) / df(x)
         k+=1
    error = abs(f(x))

    return (x, error)

def newton_G_m1(fun: str, x0: float, tol: float, iterMax: int):
    """Generalización del método aproximación Newton Raphson por
    medio del método Halley

    Utiliza una variante del método Newton Raphson con la función 
    de peso Gw:

        x = x + Gw(x)*(f(x)/df(x))

    Donde: 

        w  = f(x)*f''(x) / (f'(x))**2
        Gw = 2/2-w

    Devuelve en una tupla el valor de el error y el valor de x
    donde:

        f(x) = 0

    Parámetros:
    fun     -- string que representa la función f para la aproximación 
    x0      -- valor inicial 
    tol     -- tolerancia debe ser mayor a 0
    iterMax -- número máximo de iteraciones 
    
    """
    xk          = symbols("xk")
    
    f           = parse_expr(fun) 
    df          = diff(f)
    w           = (f*diff(df))/(df**2)
    Gw          = 2/(2-w)

    f           = lambdify(xk, f)
    df          = lambdify(xk, df)
    w           = lambdify(xk, w)
    Gw          = lambdify(xk, Gw)
    
    A           = 0.1
    x           = x0
    k           = 0

    while (k < iterMax) & (abs(f(x)) > tol):
         x = x - Gw(x) *f(x) / df(x)
         k+=1
    error = abs(f(x))

    return (x, error)

def newton_G_m2(fun: str, x0: float, tol: float, iterMax: int):
    """Generalización del método aproximación Newton Raphson por
    medio del método Fang et al. 

    Utiliza una variante del método Newton Raphson con la función 
    de peso Gw:

        x = x + Gw(x)*(f(x)/df(x))

    Donde: 
        w  = f(x)*f''(x) / (f'(x))**2
        Gw = 2/(1+sqrt(1-w))

    Devuelve en una tupla el valor de el error y el valor de x
    donde:

        f(x) = 0

    Parámetros:
    fun     -- string que representa la función f para la aproximación 
    x0      -- valor inicial 
    tol     -- tolerancia debe ser mayor a 0
    iterMax -- número máximo de iteraciones 
    
    """
    xk          = symbols("xk")
    
    f           = parse_expr(fun) 
    df          = diff(f)
    w           = (f*diff(df))/(df**2)
    Gw          = 2/(1+sqrt(1-w))

    f           = lambdify(xk, f)
    df          = lambdify(xk, df)
    w           = lambdify(xk, w)
    Gw          = lambdify(xk, Gw)
    
    A           = 0.1
    x           = x0
    k           = 0

    while (k < iterMax) & (abs(f(x)) > tol):
         x = x - Gw(x) *f(x) / df(x)
         k+=1
    error = abs(f(x))

    return (x, error)
