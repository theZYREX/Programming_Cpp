//
//  rectangle.h
//  Shape
//
//  Created by Илья Овсянников on 23.10.2025.
//
#ifndef RECTANGLE_H
#define RECTANGLE_H
#include "shape.h"
class rectangle : public shape
{
public:
    int rside;
    int rsurface;
    rectangle();
    rectangle(int rside, int rsurface);
    double square();
    double perimeter();
    std::string name();
};

#endif
