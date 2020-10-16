function xAprox = div_t(a)
    tmpA =1;
    if(a==0)
        xAprox = 0;
        return
    else
        if( factorial(80) < a && a <= factorial(100))
            tmpX = eps^15;
        elseif( factorial(60) < a && a<= factorial(80))
            tmpX = eps^11;
        elseif( factorial(40) < a && a <= factorial(60))
            tmpX = eps^8;
        elseif( factorial(20) < a && a <= factorial(40))
            tmpX = eps^4;
        else
            tmpX = eps^2;
        endif
        if(a<0)
            tmpA = -1;
            a= abs(a);
        else    
            a=a;
        endif
        xAprox = tmpX*(2-(a*tmpX));
        iteration=1;
        tol = 10^-8;

        while(abs((xAprox-tmpX)/xAprox)>= tol)
            tmpX = xAprox;
            if(iteration>=25000)
                xAprox = xAprox;
                break;
            else
                xAprox = tmpX*(2-(a*tmpX));
                iteration++;
            endif
        endwhile
    endif
    xAprox = tmpA*xAprox; 
endfunction