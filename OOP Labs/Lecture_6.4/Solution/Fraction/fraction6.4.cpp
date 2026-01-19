//
//  fraction6.4.cpp
//  OOlabs
//
//  Created by Илья Овсянников on 13.12.2025.
//
#include "fraction6.4.h"
#include <iostream>


fraction::fraction(int num, int den)
: num(num), den(den){}

bool operator==(fraction& a, fraction& b)
{
    return a.num * b.den == b.num * a.den;
}

bool operator!=(fraction& a,fraction& b)
{
    return !(a == b);
}


bool operator<( fraction& a,fraction& b)
{
    return a.num * b.den < b.num * a.den;
}

bool operator>(fraction& a,fraction& b)
{
    return b < a;
}

bool operator<=(fraction& a, fraction& b)
{
    return !(b < a);
}

bool operator>=( fraction& a,fraction& b)
{
    return !(a < b);
}

std::ostream& operator<<(std::ostream& os, const fraction& f)
{
    os << f.num << "/" << f.den;
    return os;
}
