//
//  fraction3.cpp
// OOlabs
//
//  Created by Илья Овсянников on 13.11.2025.

#include "fraction3.h"
#include <iostream>

fraction::fraction()
{
    num = 0;
    den = 0;
}

fraction::fraction(int num, int den)
{
    this-> num = num;
    this-> den = den;
}

int compareFractions(fraction& a,fraction& b)
{
int lhs = a.num * b.den;
int rhs = b.num * a.den;
if (lhs < rhs) return -1;
if (lhs > rhs) return 1;
if (lhs == rhs) return 2;
return 0;
}

bool operator<(fraction& a, fraction& b)
{
return compareFractions(a, b) < 0;
}

bool operator>(fraction& a,fraction& b)
{
return compareFractions(a, b) > 0;
}

std::ostream& operator<<(std::ostream& os, const fraction& f)
{
    return os << f.num << "/" << f.den;
}

bool operator==(fraction& a, fraction& b)
{
    return compareFractions(a,b) == 2;
}
