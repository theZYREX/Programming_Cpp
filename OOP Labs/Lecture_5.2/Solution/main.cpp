#include <iostream>
#include "templates2.h"
#include "fraction3.h"

int main()
{
    Container<int> c1;
    
    c1.add(10);
    c1.add(2);
    c1.add(1);
    c1.add(7);
    c1.add(3);
    c1.add(11);
    std::cout << c1 << std::endl;
    
    c1.del();
    c1.del();
    std::cout << c1 << std::endl;
    
    Container<fraction> c2;
    
    c2.del();
    
    c2.add(fraction(1,3));
    c2.add(fraction(1,3));
    c2.add(fraction(2,3));
    c2.add(fraction(4,8));
    std::cout << c2 << std::endl;

    c2.del();
    std::cout << c2 << std::endl;
    
}

