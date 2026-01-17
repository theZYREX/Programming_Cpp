#include "fraction2.h"
#include <iostream>

int main()
{
    fraction f1(1,2);
    fraction f2 = 3;
    fraction f3;
    
    f3 = f1 + f2;
    std::cout<< f3 << std::endl;
    f3 = f1 + 2;
    std::cout<< f3 << std::endl;
    f3 = 2 + f1;
    std::cout<< f3 << std::endl;
    std::cout<< double(f3) << "\n";
    f3 = f1 - f2;
    std::cout<< f3 << std::endl;
    f3 = f1 - 2;
    std::cout<< f3 << std::endl;
    f3 = 2 - f1;
    std::cout<< f3 << std::endl;

    return 0;
}
