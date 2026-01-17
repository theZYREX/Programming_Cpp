#include <iostream>
#include "fraction.h"

int main()
{
    fraction t1(7 ,10), t2(5,10), t3,t4,t5;
    t1.info();
    t2.info();
    t3 = t1.add(t2);
    std::cout <<"Cумма 1 и 2 дроби: ";
    t3.info();
    t4 = t1.sub(t2);
    std::cout <<"Разность 1 и 2 дроби: ";
    t4.info();
    t5 = t1.comp(t2);
    std::cout <<"\n";
    return 0;
}
