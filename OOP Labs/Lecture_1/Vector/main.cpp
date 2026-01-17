//
//  main.cpp
//  OOlabs
//
//  Created by Илья Овсянников on 17.01.2026.
//

#include <iostream>
#include "vector.h"

int main()
{
    vector c1,c2,c3,c4;
    c1.x = 4; c1.y = -5;
    c2.x = 3; c2.y = 0;
    info(c1);
    info(c2);
    c3 = add(c1,c2);
    std::cout << "Сумма векторов";
    info(c3);
    c4 = sub(c1,c2);
    std::cout << "Разность векторов";
    info(c4);
    std::cout << "Квадрант вектора:" << getquadrant(c4) <<"\n";
    return 0;
}
