function xAprox = ln_t(a)
    if(isinteger(a) !=1 && a>0) 
        tmpX=0;
        iteration = 0;
        multiplier = ((2*(a-1))*div_t(a+1));
        xAprox = multiplier*(1*div_t(2*iteration+1))*((a-1)*div_t(a+1))^(2*iteration);
        tmpAprox = 0;
        iteration = 1;
        tol = 10^-8;

        while(double(abs(xAprox - tmpAprox))>=tol)
            tmpAprox = xAprox;
            if(iteration>=25000)
                break;
            else 
                tmpX = multiplier*(1*div_t(2*iteration+1))*((a-1)*div_t(a+1))^(2*iteration);
                xAprox = xAprox + tmpX;
                iteration++;
            endif
        endwhile
    else
        disp("El argumento entrado no es un número real positivo");
        return
    endif
endfunction
