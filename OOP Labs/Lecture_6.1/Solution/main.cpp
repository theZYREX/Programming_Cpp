#include <iostream>
#include "pet.h"

using namespace std;

int main()
{
    Pet p1;
    Pet p2("Кошка", "Маруся");
    Pet p3("Кошка","Вика");
    Pet p4("Собака","Мухтар");
    Pet p5("Хомяк", "Хома");
    
    std::list<Pet> petlist;
    std::set<Pet> petSet;
    
    petlist.push_back(p1);
    petlist.push_back(p2);
    petlist.push_back(p3);
    petlist.push_back(p4);
    petlist.push_back(p5);
    
    for (std::list<Pet>::iterator it = petlist.begin(); it !=petlist.end(); it++)
    {
        it->info();
    }
    
    cout << "\n";
    
    petSet = getPetsOfType(petlist, "Кошка");
    
    for (std::set<Pet>::iterator it = petSet.begin(); it !=petSet.end(); it++)
    {
        it->info();
    }
    
    return 0;
}

