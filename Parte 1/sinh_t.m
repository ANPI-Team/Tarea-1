function xAprox = sinh_t(a)
    if(isinteger(a) !=1) 
        tmpX=0;
        iteration = 0;
        xAprox = (a^(2*iteration+1))*div_t(factorial(2*iteration +1));
        tmpAprox = 0;
        iteration =1;
        tol = 10^-8;

        while(double(abs(xAprox - tmpAprox))>=tol)
            tmpAprox = xAprox;
            if(iteration>=25000)
                break;
            else 
                tmpX = (a^(2*iteration+1))*div_t(factorial(2*iteration +1));
                xAprox = xAprox + tmpX;
                iteration++;
            endif
        endwhile
    else
        disp("El argumento entrado no es un número real");
        return
    endif
endfunction
