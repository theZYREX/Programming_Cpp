//
//  fraction6.4.h
//  OOlabs
//
//  Created by Илья Овсянников on 13.12.2025.
//
#ifndef FRACTION6_4_H
#define FRACTION6_4_H
#include <iostream>

class fraction
{
public:
    int num;
    int den;
    fraction(int num = 0, int den = 1);
};

bool operator>( fraction& a, fraction& b);
bool operator<( fraction& a, fraction& b);
bool operator==(fraction& a, fraction& b);
bool operator!=(fraction& a, fraction& b);
bool operator<=(fraction& a, fraction& b);
bool operator>=(fraction& a, fraction& b);


std::ostream& operator<<(std::ostream& os, const fraction& f);
#endif

