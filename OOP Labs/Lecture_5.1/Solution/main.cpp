#include "fraction3.h"
#include "templates.h"
#include <iostream>
using namespace std;

int main()
{
    int a[] = {1, 5, 3, 7, 2};
    int n = 5;
    int val = 4;

    int less = countLess(a, n, val);
    int greater = countGreater(a, n, val);

    std::cout << "Число элементов массива меньше " << val << ": " << less << std::endl;
    std::cout << "Число элементов массива больше " << val << ": " << greater << std::endl;

    fraction b[] = { fraction(1,2), fraction(3,4), fraction(2,3), fraction(5,6) };
    int m = 4;
    fraction value(1, 2);

    int lessFrac = countLess(b, m, value);
    int greaterFrac = countGreater(b, m, value);

    std::cout << "Число дробей меньше " << "1/2" << ": " << lessFrac << std::endl;
    std::cout << "Число дробей больше " << "1/2" << ": " << greaterFrac << std::endl;

    return 0;
}

