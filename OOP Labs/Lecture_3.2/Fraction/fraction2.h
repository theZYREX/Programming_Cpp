//
//  fraction.h
//  OOlabs
//
//  Created by Илья Овсянников on 16.10.2025.
//

#ifndef FRACTION2_H
#define FRACTION2_H
#include <iostream>

class fraction
{
public:
    int numerator;
    int denominator;
    fraction();
    fraction(int numerator, int denominator);
    fraction(int n);
    operator double();
    
};

fraction operator+(fraction f1, fraction f2);
fraction operator+(fraction f1, int n);
fraction operator+(int n, fraction f2);
fraction operator-(fraction f1, fraction f2);
fraction operator-(fraction f1, int n);
fraction operator-(int n, fraction f2);
std::ostream& operator<<(std::ostream& os, const fraction &f);

#endif
