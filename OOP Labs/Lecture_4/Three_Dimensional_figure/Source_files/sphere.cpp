//
//  sphere.cpp
//  oopThree-dimensional figure
//
//  Created by Илья Овсянников on 30.10.2025.
//

#include "sphere.h"

sphere::sphere()
{
    sr = 0;
}

sphere::sphere(int sr)
{
    this->sr = sr;
}

double sphere::volume()
{
    double volume = 4 * 3.14 * sr * sr * sr / 3;
    return volume;
}

double sphere::bsa()
{
    double bsa = 4 * 3.14 * sr * sr;
    return  bsa;
}

std::string sphere::name()
{
    return "Шар";
}


