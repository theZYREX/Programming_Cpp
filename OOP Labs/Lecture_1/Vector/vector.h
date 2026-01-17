//
//  vector.h
//  OOlabs
//
//  Created by Илья Овсянников on 01.10.2025.
//
#ifndef VECTOR_H
#define VECTOR_H

struct vector
{
double x;
double y;
};

void info(vector c);
vector add(vector c1, vector c2);
vector sub(vector c1, vector c2);
enum quadrant {
    I = 1,
    II,
    III,
    IV,
};
quadrant getquadrant(vector с);

#endif
