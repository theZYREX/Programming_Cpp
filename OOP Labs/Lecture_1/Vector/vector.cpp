//
//  vector.cpp
//  OOlabs
//
//  Created by Илья Овсянников on 01.10.2025.
//
#include <iostream>
#include "vector.h"

void info(vector c)
{
    std::cout << "(" << c.x << ":" << c.y << ")\n";
}

vector add(vector c1, vector c2)
{
    vector result;
    result.x = c1.x + c2.x;
    result.y = c1.y + c2.y;
    return result;
}

vector sub(vector c1, vector c2)
{
    vector result;
    result.x = c1.x - c2.x;
    result.y = c1.y - c2.y;
    return result;
}

quadrant getquadrant(vector c) {
    if (c.x > 0 && c.y > 0)
        return I;
    else if (c.x < 0 && c.y > 0)
        return II;
    else if (c.x < 0 && c.y < 0)
        return III;
    else return IV;
}

