function xAprox = acos_t(a)
    if(-1<=a && a<=1 && isinteger(a)!=1)
        xAprox = pi*div_t(2) - asin_t(a);
    else
        disp("El número ingresado no está en el rango -1 a 1");
    endif
endfunction