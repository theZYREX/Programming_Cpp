//
//  cylinder.h
//  oopThree-dimensional figure
//
//  Created by Илья Овсянников on 30.10.2025.
//
#ifndef CYLINDER_H
#define CYLINDER_H
#include "tdfigure.h"

class cylinder : public tdfigure
{
public:
    int cr;
    int h;
    cylinder();
    cylinder(int cr, int h);
    double volume();
    double bsa();
    std::string name();
};

#endif
