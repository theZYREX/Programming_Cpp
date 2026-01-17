//
//  tdfigure.h
//  oopThree-dimensional figure
//
//  Created by Илья Овсянников on 30.10.2025.
//

#ifndef TDFIGURE_H
#define TDFIGURE_H
#include <iostream>

class tdfigure
{
public:
    virtual double volume() = 0;
    virtual double bsa() = 0;
    virtual std::string name() = 0;
};

bool operator>( tdfigure& lhs, tdfigure& rhs);
bool operator<( tdfigure & lhs, tdfigure& rhs);
bool operator==( tdfigure & lhs, tdfigure& rhs);

#endif
