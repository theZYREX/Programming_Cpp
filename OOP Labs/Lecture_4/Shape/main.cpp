//
//  main.cpp
//  Shape
//
//  Created by Илья Овсянников on 23.10.2025.
//

#include <iostream>
#include "shape.h"
#include "rectangle.h"
#include "triangle.h"
#include "circle.h"

int main()
{
    triangle t1(9, 6, 7, 11);
    circle c1(3);
    rectangle r1(4, 5);
    
    shape* sh[3];
    sh[0] = &t1;
    sh[1] = &c1;
    sh[2] = &r1;
    
    for (int i = 0; i < 3; i++){
        std::cout << "Фигура:" << sh[i] -> name() << "\n" << "Площадь:" << sh[i]->square() << "\n" << "Периметр:" << sh[i] -> perimeter() << "\n";
    }
    
}
