function xAprox = test_funtras()
    xTerm1 = root_t((sin_t(3*div_t(7))+ln_t(2)),3);
    xTerm2 = sinh_t(sqrt_t(2));
    xTerm3 = atan_t(div_t(exp_t(1)));
    xFunc = (xTerm1*div_t(xTerm2))+xTerm3;
    xAprox = xFunc;
endfunction