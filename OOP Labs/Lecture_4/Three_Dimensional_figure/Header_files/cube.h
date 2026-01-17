//
//  cube.h
//  oopThree-dimensional figure
//
//  Created by Илья Овсянников on 30.10.2025.
//
#ifndef CUBE_H
#define CUBE_H
#include "tdfigure.h"

class cube : public tdfigure
{
public:
    int side;
    cube();
    cube(int side);
    double volume();
    double bsa();
    std::string name();
};

#endif
