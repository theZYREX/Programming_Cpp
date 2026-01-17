//
//  complexnumber.h
//  OOlabs
//
//  Created by Илья Овсянников on 25.09.2025.
//
#ifndef COMPLEXNUMBER_H
#define COMPLEXNUMBER_H

struct ComplexNumber
{
    double re;
    double im;
};

enum ComplexNumberType {RE, IM, COMPLEX};

void info(ComplexNumber c);
ComplexNumber add(ComplexNumber c1, ComplexNumber c2);
ComplexNumberType getNumberType(ComplexNumber c);

#endif
