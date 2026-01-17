//
//  main.cpp
//  three-dimensional figure
//
//  Created by Илья Овсянников on 30.10.2025.
//

#include <iostream>
#include "cube.h"
#include "cylinder.h"
#include "sphere.h"
#include "tdfigure.h"
using namespace std;

int main()
{
    cube c1(5);
    cylinder cy1(3,4);
    sphere s1(4);
    
    tdfigure* td[3];
    td[0] = &c1;
    td[1] = &cy1;
    td[2] = &s1;
    
    for (int i = 0; i < 3; i++){
        cout << "Фигура:" << td[i] -> name() << "\n" << "Объем:" << td[i]->volume() << "\n" << "Площадь поверхности:" << td[i] -> bsa() << "\n";
    }
    tdfigure& fig1 = c1;
    tdfigure& fig2 = cy1;
    tdfigure& fig3 = s1;
    
    
    if (fig1 > fig2){
        cout << "Объем куба больше объема цилиндра" << "\n";
    }
    
    if (fig1 < fig3){
        cout << "Площадь поверхности шара больше чем у куба" << "\n";
    }
    
    }

