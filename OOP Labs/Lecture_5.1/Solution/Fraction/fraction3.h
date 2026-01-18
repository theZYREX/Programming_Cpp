//
//  fraction3.h
//  OOlabs
//
//  Created by Илья Овсянников on 13.11.2025.
//
#ifndef FRACTION3_H
#define FRACTION3_H
#include <iostream>

class fraction
{
public:
    int num;
    int den;
    fraction();
    fraction(int num, int den);
};

bool operator>( fraction& a, fraction& b);
bool operator<( fraction& a, fraction& b);
std::ostream& operator<<(std::ostream& os, const fraction& f);
bool operator==(fraction& a, fraction& b);
#endif
