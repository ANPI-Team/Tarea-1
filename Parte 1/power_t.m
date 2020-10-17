function xAprox = power_t(x,a)
    if(isinteger(a) !=1 & isinteger(x) !=1) 
        xTemp = 1;
        for i=1:x
            xTemp = xTemp * a;
            xAprox = xTemp;
        endfor 
    else
        disp("Los argumentos  ingresados no son un número real");
        return
    endif
endfunction