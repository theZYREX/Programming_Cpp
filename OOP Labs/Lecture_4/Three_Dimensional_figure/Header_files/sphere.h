//
//  sphere.h
//  oopThree-dimensional figure
//
//  Created by Илья Овсянников on 30.10.2025.
//
#ifndef SPHERE_H
#define SPHERE_H
#include "tdfigure.h"

class sphere : public tdfigure
{
public:
    int sr;
    sphere();
    sphere(int sr);
    double volume();
    double bsa();
    std::string name();
};

#endif
