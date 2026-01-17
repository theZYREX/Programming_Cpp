//
//  cylinder.cpp
//  oopThree-dimensional figure
//
//  Created by Илья Овсянников on 30.10.2025.
//
#include "cylinder.h"

cylinder::cylinder()
{
    cr = 0;
    h = 0;
}

cylinder::cylinder(int cr, int h)
{
    this->cr = cr;
    this->h = h;
}

double cylinder::volume(){
    double volume = 3.14  * h * cr * cr;
    return volume;
}

double cylinder::bsa()
{
    double cba = 2 * 3.14 * cr * (cr + h);
    return cba;
}

std::string cylinder::name()
{
    return "Цилиндр";
}
