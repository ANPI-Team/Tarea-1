function xAprox = tanh_t(a)
    if(isinteger(a)!=1)
        xAprox = sinh_t(a)*div_t(cosh_t(a));
    else
        disp("el número ingresado no está dentro del ámbito de la función")
        return
    endif
endfunction