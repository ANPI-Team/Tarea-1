function xAprox = log_t(x,a)
    if(isinteger(a) !=1 && a>0) 
        xAprox = ln_t(x)*div_t(ln_t(a));
    else
        disp("el número ingresado no está dentro del ámbito de la función")
        return
    endif
endfunction