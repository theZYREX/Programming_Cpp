//
//  fraction.cpp
//  OOlabs
//
//  Created by Илья Овсянников on 16.10.2025.
//

#include "fraction2.h"

fraction::fraction()
{
    numerator = 0;
    denominator = 1;
}

fraction::fraction( int _numerator, int _denominator)
{
    numerator = _numerator;
    denominator = _denominator;
}

fraction::fraction(int n)
{
    numerator = n;
    denominator = 1;
}

fraction operator+(fraction f1, fraction f2)
{
    fraction result;
    result.denominator = f1.denominator * f2.denominator;
    result.numerator = f1.numerator * f2.denominator + f2.numerator * f1.denominator;
    return result;
}

fraction operator+(fraction f1, int n)
{
    fraction result;
    result.denominator = f1.denominator;
    result.numerator = f1.numerator + n * f1.denominator;
    return result;
}

fraction operator+(int n, fraction f2)
{
    fraction result;
    result.denominator = f2.denominator;
    result.numerator = f2.numerator + n * f2.denominator;
    return result;
}

fraction::operator double()
{
    double result = numerator / (double)denominator;
    return result;
}

fraction operator-(fraction f1, fraction f2)
{
    fraction result;
    result.denominator = f1.denominator * f2.denominator;
    result.numerator = f1.numerator * f2.denominator - f2.numerator * f1.denominator;
    return result;
}

fraction operator-(fraction f1, int n)
{
    fraction result;
    result.denominator = f1.denominator;
    result.numerator = f1.numerator - n * f1.denominator;
    return result;
}

fraction operator-(int n, fraction f2)
{
    fraction result;
    result.denominator = f2.denominator;
    result.numerator = f2.numerator - n * f2.denominator;
    return result;
}

std::ostream& operator<<(std::ostream& os, const fraction &f)
{
    return os << f.numerator << "/" << f.denominator;
}

