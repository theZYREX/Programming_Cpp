//
//  triangle.cpp
//  Shape
//
//  Created by Илья Овсянников on 23.10.2025.
//
#include "triangle.h"

triangle::triangle()
{
    tbase = 0;
    theight = 0;
    tside = 0;
    tsurface = 0;
}

triangle::triangle(int _tbase, int _theight, int _tside, int _tsurface)
{
    tbase = _tbase;
    theight = _theight;
    tside = _tside;
    tsurface = _tsurface;
}

double triangle::square()
{
    double square = (tbase * theight) / 2;
    return square;
}

double triangle::perimeter()
{
    double perimeter = tbase + tside + tsurface;
    return perimeter;
}

std::string triangle::name()
{
    return "Треугольник";
}
