#include <iostream>
#include "ComplexNumber.h"

int main()
{
    ComplexNumber c1,c2,c3;
    c1.re = 0; c1.im = -2;
    c2.re =3; c2.im = 6;
    info(c1);
    info(c2);
    c3 = add(c1,c2);
    info(c3);
    std::cout << getNumberType(c1) <<"\n";
    return 0;
}
