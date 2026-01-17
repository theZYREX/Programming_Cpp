//
//  cube.cpp
//  oopThree-dimensional figure
//
//  Created by Илья Овсянников on 30.10.2025.
//
#include "cube.h"

cube::cube()
{
    side = 0;
}

cube::cube(int side)
{
    this->side = side;
}

double cube::volume()
{
    double volume = side * side * side;
    return volume;
}

double cube::bsa()
{
    double bsa = 6 * side * side;
    return bsa;
}

std::string cube::name()
{
    return "Куб";
}
