function xAprox = tan_t(a)
    if(isinteger(a)!=1)
        xAprox = sin_t(a)*div_t(cos_t(a));
    else
        disp("el número ingresado no está dentro del ámbito de la función")
        return
    endif
endfunction