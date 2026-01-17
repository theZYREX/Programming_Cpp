//
//  rectangle.cpp
//  Shape
//
//  Created by Илья Овсянников on 23.10.2025.
//
#include "rectangle.h"

rectangle::rectangle()
{
    rside = 0;
    rsurface = 0;
}

rectangle::rectangle(int _rside, int _rsurface)
{
    rside = _rside;
    rsurface =_rsurface;
}

double rectangle::square()
{
    double square = rside * rsurface;
    return square;
}

double rectangle::perimeter()
{
    double perimeter = 2 * (rside * rsurface);
    return perimeter;
}

std::string rectangle::name()
{
    return "Прямоугольник";
}

