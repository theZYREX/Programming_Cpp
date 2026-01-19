#include <iostream>
#include "templates6.4.h"
#include "fraction6.4.h"

int main() {
    Container<int> c1;
    c1.add(5);
    c1.add(3);
    c1.add(7);
    c1.add(8);
    c1.add(2);

    std::cout << "Контейнер int: ";
    c1.info();

    c1.del();

    std::cout << "Контейнер int(после удаления последнего элемента): ";
    c1.info();

    std::cout << "Итерация по возрастающей последовательности (int): ";
    for (auto it = c1.begin(); it != c1.end(); ++it) {
        std::cout << *it << " ";
    }
    
    std::cout <<"\n" << "\n";
    
    Container<fraction> f1;
    f1.add(fraction(1, 2));
    f1.add(fraction(1, 4));
    f1.add(fraction(1, 8));
    f1.add(fraction(2, 3));
    f1.add(fraction(2, 4));
    
    //1/2-12/24 1/4-6/24 1/8-3/24 2/3-16/24 2/4-12/24

    std::cout << "Контейнер fraction (все элементы): ";
    f1.info();

    std::cout << "Итерация по возрастающей последовательности (fraction): ";
    for (auto it = f1.begin(); it != f1.end(); ++it) {
        std::cout << *it << " ";
    }
    std::cout << std::endl;

    std::cout << "Обратный обход (fraction, простой): ";
    for (auto it = f1.end(); it != f1.begin(); ) {
        --it;
        std::cout << *it << " ";
    }
    std::cout << std::endl;

    return 0;
}
