//
//  triangle.h
//  Shape
//
//  Created by Илья Овсянников on 23.10.2025.
//
#ifndef TRIANGLE_H
#define TRIANGLE_H
#include "shape.h"

class triangle : public shape
{
public:
    int tbase;
    int theight;
    int tside;
    int tsurface;
    triangle();
    triangle(int tbase, int theight, int tside, int tsurface);
    double square();
    double perimeter();
    std::string name();
};

#endif
