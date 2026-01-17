//
//  fraction.cpp
//  OOlabs
//
//  Created by Илья Овсянников on 08.10.2025.
//

#include <iostream>
#include "fraction.h"

fraction::fraction()
{
    numerator = 0; denominator = 0;
}

fraction::fraction(int _numerator, int _denominator)
{
    numerator = _numerator;
    denominator = _denominator;
}

void fraction::info()
{
    std::cout << "(" << numerator << "/" << denominator << ")\n";
}

fraction fraction::add(fraction t)
{
    fraction result;
    result.numerator = numerator * t.denominator + denominator * t.numerator;
    result.denominator = denominator * t.denominator;
    return result;
}

fraction fraction::sub(fraction t)
{
    fraction result;
    result.numerator = numerator * t.denominator - denominator * t.numerator;
    result.denominator = denominator * t.denominator;
    return result;
}

fraction fraction::comp(fraction t)
{
    fraction result;
    int first = numerator * t.denominator;
    int second = denominator * t.numerator;
    if ( first > second){
        std::cout << "1 дробь больше 2";
    }
    else if( first < second){
        std::cout << "1 дробь меньше 2";
    }
    else {
        std::cout << "Дроби равны";
    }
    return *this;
}




