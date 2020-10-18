#Dado que los valores calculados llegana un numero muy grande, hace que se vuelvan infintos, a partir del calculo de pi/3.
#Esto se da por el soporte que posee octave haciendo que las iteraciones son muchas por lo que el valor aproximado se dispara increiblemente.
function xAprox = asin_t(a)
    if(isinteger(a) !=1) 
        if(abs(a) > (pi_t()/2))
            disp("El valor debe estar dentro del codominio: ]-pi/2, pi/2[")
            return
        else
            tmpX=0;
            iteration = 0;
            xAprox = ((factorial(2*iteration))*(a^(2*iteration+1)))*(div_t((4^iteration)*((factorial(iteration))^2)*(2*iteration+1)));
            tmpAprox = 0;
            iteration =1;
            tol = 10^-8;

            while(double(abs(xAprox - tmpAprox))>=tol)
                tmpAprox = xAprox;
                if(iteration>=25000)
                    break;
                else 
                    tmpX = ((factorial(2*iteration))*(a^(2*iteration+1)))*(div_t((4^iteration)*((factorial(iteration))^2)*(2*iteration+1)));
                    xAprox = xAprox + tmpX;
                    iteration++;
                endif
            endwhile
        endif
      
    else
        disp("El argumento entrado no es un número real");
        return
    endif
endfunction