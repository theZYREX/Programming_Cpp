//
//  lab1.cpp
//  OOlabs
//
//  Created by Илья Овсянников on 25.09.2025.
//
//
#include <iostream>
#include "ComplexNumber.h"

void info(ComplexNumber c)
{
    std::cout << "(" << c.re << " + i*" << c.im << ")\n";
}

ComplexNumber add(ComplexNumber c1, ComplexNumber c2)
{
    ComplexNumber result;
    result.re = c1.re + c2.re;
    result.im = c1.im + c2.im;
    return result;
}

ComplexNumberType getNumberType(ComplexNumber c)
{
    ComplexNumberType result = COMPLEX;
    if(c.im == 0)
    {
        result = RE;
    } else if(c.re == 0)
    {
        result = IM;
    }
    return result;
}
