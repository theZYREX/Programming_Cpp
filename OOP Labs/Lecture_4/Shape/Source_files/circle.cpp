//
//  circle.cpp
//  Shape
//
//  Created by Илья Овсянников on 23.10.2025.
//
#include "circle.h"

circle::circle()
{
    r = 0;
}

circle::circle(int _r)
{
    r = _r;
}

double circle::square()
{
    double square = 3.14 * r * r;
    return square;
}

double circle::perimeter()
{
    double perimeter = 2 * 3.14 * r;
    return perimeter;
}

std::string circle::name()
{
    return "Окружность";
}

