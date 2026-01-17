//
//  fraction.h
//  OOlabs
//
//  Created by Илья Овсянников on 08.10.2025.
//

#ifndef FRACTION_H
#define FRACTION_H

class fraction{
    public:
    int numerator;
    int denominator;
    fraction();
    fraction(int numerator, int denominator);
    void info();
    fraction add(fraction t);
    fraction sub(fraction t);
    fraction comp(fraction t);
};

#endif
