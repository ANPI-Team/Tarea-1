function xAprox = sqrt_t(a)
    if(isinteger(a) !=1 && a>0) 
        xAprox = root_t(2,a);
    else
        disp("El argumento entrado no es un número real positivo");
        return
    endif
endfunction