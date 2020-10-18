/**
 * @file FunTras.hpp
 * @version 1.0
 * @date 18/10/2020
 * @title Funciones Transcendentes
 */

#ifndef FunTras_hpp
#define FunTras_hpp

#include <stdio.h>
#include <cmath>


class funTras
{
private:
    static constexpr double TOLERANCE = 10e-8;
    static const int MAXITERATION = 2500;
    static constexpr double EPS = 0.000000000000002204;

    /** @brief Funcion que inicia el valor de la división 1/a
     * @param a recibe el valor inicial
     * @return retorna el valor inicial
     * @Funciones una para tipo double, otro int y otro en long long
     */

    static double divTInitialValue(int a);
    static double divTInitialValue(unsigned long long a);
    static double divTInitialValue(double a);
    
    /**
     * @brief Funcion que calcula el valor absoluto
     * @param x recibe el valor al cual se le calculará el valor absoluto
     * @return retorna valor positivo
     * @Funciones una para tipo double, otro int y otro en long long
     */

    static double abs(double x);
    static int abs(int x);
    static unsigned long long abs(unsigned long long x);
    
    /**
     * @brief Funcion que agrega un valor negativo al numero ingresado
     * @param a recibe el valor al cual se le multiplica un -1
     * @return retorna valor en negativo
     * @Funciones una para tipo double, otro int y otro en long long
     */

    static int negativeMultiplier(unsigned long long a);
    static int negativeMultiplier(int a);
    static int negativeMultiplier(double a);
    

public:

    /** @brief Funcion que calcula el factorial
     * @param n recibe el valor al cual se le calculará el factorial
     * @return retorna el valor de la multiplicación final
     */
    static unsigned long long factorial(int n);
    
    /** @brief Funcion que realiza la división 1/a
     * @param a recibe el valor al cual se le calculará la división
     * @return retorna la inversa
     * @Funciones una para tipo double, otro int y otro en long long
     */
    static double divT(unsigned long long a);
    static double divT(int a);
    static double divT(double a);

    /** @brief Funcion que calcula la potencia 'e' del valor ingresado
     * @param x recibe el valor de la potencia
     * @return retorna el resultado de e^x
     * @Funciones una para tipo double, otro int y otro en long long
     */
    static double expT(double x);
    static double expT(int x);

    /** @brief Funcion que calcula el valor del seno
     * @param x recibe el valor a calcular la funcion seno
     * @return retorna el resultado del cálculo
     * @Funciones una para tipo double, otro int y otro en long long
     */
    static double sinT(double x);
    static double sinT(int x);

    /** @brief Funcion que calcula el valor del coseno
     * @param x recibe el valor a calcular la funcion coseno
     * @return retorna el resultado del cálculo
     * @Funciones una para tipo double, otro int y otro en long long
     */
    static double cosT(double x);
    static double cosT(int x);
    
    /** @brief Funcion que calcula el valor de la tangente
     * @param x recibe el valor a calcular la funcion tangente
     * @return retorna el resultado del cálculo
     * @Funciones una para tipo double, otro int y otro en long long
     */
    static double tanT(double x);
    static double tanT(int x);
    
    /** @brief Funcion que calcula la potencia 'x' del valor 'a'
     * @param x cantidad de iteraciones a realizar en la productoria
     * @param a valor a multiplicar
     * @return retorna el resultado de a^x
     * @Funciones una para tipo double, otro int y otro en long long
     */
    static double powerT(double x, double a);
    static double powerT(int x, double a);
    static double powerT(double x, int a);
    static double powerT(int x, int a);
    static unsigned long long powerT(int x, unsigned long long a);
    
    /** @brief Funcion que calcula la raíz k-ésima de los valores ingresados
     * @param x radicando al que se le calculará la raíz
     * @param a índice de la raíz
     * @return retorna el resultado de la operación
     * @Funciones una para tipo double, otro int
     */
    static double rootT(int x, int a);
    static double rootT(double x, int a);
    
    /** @brief Funcion que calcula la raíz cuadrada
     * @param x radicando al que se le calculará la raíz cuadrada
     * @return retorna el resultado de la operación
     * @Funciones una para tipo double, otro int
     */
    static double sqrtT(int x);
    static double sqrtT(double x);
    
    /** @brief Funcion que calcula el logaritmo natural
     * @param x valor del argumento para calcular el logaritmo natural
     * @return retorna el resultado de la operación
     * @Funciones una para tipo double, otro int
     */
    static double lnT(int x);
    static double lnT(double x);
    
    /** @brief Funcion que calcula el logaritmo base 'a' de 'x'
     * @param x argumento a calcular el logaritmo
     * @param a base del logaritmo
     * @return retorna el resultado de la raíz
     * @Funciones una para tipo double, otro int y otro en long long
     */
    static double logT(int x, int a);
    static double logT(double x, int a);
    static double logT(double x, double a);
    static double logT(int x, double a);
    
    /** @brief Funcion que calcula el valor del arcoseno
     * @param x recibe el valor a calcular la funcion arcoseno
     * @return retorna el resultado de la función
     * @Funciones una para tipo double, otro int
     */
    static double asinT(int x);
    static double asinT(double x);
    
    /** @brief Funcion que calcula el valor del artangente
     * @param x recibe el valor a calcular la funcion arcotangente
     * @return retorna el resultado de la función
     * @Funciones una para tipo double, otro int
     */
    static double atanT(int x);
    static double atanT(double x);
    
    /** @brief Funcion que calcula el valor del seno hiperbólico
     * @param x recibe el valor a calcular la funcion seno hiperbólico
     * @return retorna el resultado de la función
     * @Funciones una para tipo double, otro int
     */
    static double sinhT(int x);
    static double sinhT(double x);

    /** @brief Funcion que calcula el valor del coseno hiperbólico
     * @param x recibe el valor a calcular la funcion coseno hiperbólico
     * @return retorna el resultado de la función
     * @Funciones una para tipo double, otro int
     */
    static double coshT(int x);
    static double coshT(double x);

    /** @brief Funcion que calcula el valor del tangente hiperbólico
     * @param x recibe el valor a calcular la funcion tangente hiperbólico
     * @return retorna el resultado de la función
     * @Funciones una para tipo double, otro int
     */
    static double tanhT(int x);
    static double tanhT(double x);
};

#endif /* FunTras_hpp */

