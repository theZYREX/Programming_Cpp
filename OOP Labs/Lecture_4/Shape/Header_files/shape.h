//
//  shape.h
//  Shape
//
//  Created by Илья Овсянников on 23.10.2025.
//
#ifndef SHAPE_H
#define SHAPE_H
#include <iostream>
class shape
{
public:
    virtual double square() = 0;
    virtual double perimeter() = 0;
    virtual std::string name() = 0;
};
 
#endif
