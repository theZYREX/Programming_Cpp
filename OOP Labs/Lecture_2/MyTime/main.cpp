#include <iostream>
#include "mytime.h"

int main()
{
    mytime t1,t2(3, 15, 30),t3,t4,t5,t6(1, 1, 10);
    t1.info();
    t2.info();
    t1 = t2.adds(50);
    std::cout <<"Сумма sec t2+50";
    t1.info();
    t3 = t2.subs(50);
    std::cout <<"Разность sec t2-50";
    t3.info();
    t4 = t2.add(t6);
    std::cout <<"Сумма";
    t4.info();
    t5 = t2.sub(t6);
    std::cout <<"Разность";
    t5.info();
    return 0;
}

