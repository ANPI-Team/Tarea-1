function retval = pi_t ()
    output_precision(15)
    iterMax = 2500;
    tol=10^-8;
    mypi= 0;
    k = 0; 
    error = tol + 1;
    while (error > tol ) & (k <= iterMax)
        mypi= mypi+ (4*((-1)^k))/(2*k + 1); 
        error = abs(mypi-pi);
        k++; 
    end
    retval = mypi;
endfunction
