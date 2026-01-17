//
//  circle.h
//  Shape
//
//  Created by Илья Овсянников on 23.10.2025.
//
#ifndef CIRCLE_H
#define CIRCLE_H
#include "shape.h"
#include <iostream>

class circle : public shape
{
public:
    int r;
    circle();
    circle(int r);
    double square();
    double perimeter();
    std::string name();
};

std::ostream& operator<<(std::ostream& os, const circle c1);

#endif
