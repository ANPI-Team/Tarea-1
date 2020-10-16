function xAprox = atan_t(a)
    if(isinteger(a) !=1)
        if (abs(a) >1)
          disp("Este cálculo está limitado a valores entre -1 y 1 según la Serie de Maclaurin")
          return
         else
           tmpX=0;
           iteration = 0;
           xAprox = (((-1)^iteration)*(a^(2*iteration+1)))*div_t(2*iteration+1);
           tmpAprox = 0;
           iteration = 1;
           tol = 10^-8;
           while(double(abs(xAprox - tmpAprox))>=tol)
               tmpAprox = xAprox;
               if(iteration>=25000)
                  break;
               else 
                  tmpX = (((-1)^iteration)*(a^(2*iteration+1)))*div_t(2*iteration+1);
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