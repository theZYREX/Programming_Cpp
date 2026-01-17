//
//  tdfigure.cpp
//  oopThree-dimensional figure
//
//  Created by Илья Овсянников on 30.10.2025.
//

#include "tdfigure.h"

bool operator>( tdfigure& lhs, tdfigure& rhs)
{
    return lhs.volume() > rhs.volume();
}

bool operator<( tdfigure& lhs, tdfigure& rhs)
{
    return lhs.bsa() < rhs.bsa();
}

bool operator==( tdfigure& lhs, tdfigure& rhs)
{
    return lhs.volume() == rhs.volume();
}
