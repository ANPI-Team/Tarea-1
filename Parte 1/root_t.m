function xAprox = root_t(x,a)
   if(x==0 && (a<0))
        xAprox = 0;
        disp("Los parametros no pertenecen al ambito de la función");
        return
    else
        tmpX = a*div_t(2);
        xAprox = tmpX - ((tmpX^x)-a)*div_t(tmpX*x);
        iteration=1;
        tol = 10^-8;

        while(abs((xAprox-tmpX)/xAprox)>= tol)
            tmpX = xAprox;
            if(iteration>=25000)
                xAprox = xAprox;
                break;
            else
                xAprox = tmpX - ((tmpX^x)-a)*div_t(tmpX*x);
                iteration++;
            endif
        endwhile
    endif 
endfunction