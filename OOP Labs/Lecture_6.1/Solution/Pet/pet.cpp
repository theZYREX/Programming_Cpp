//
//  pet.cpp
//  OOlabs
//
//  Created by Илья Овсянников on 27.11.2025.
//
#include "pet.h"

Pet::Pet()
{
    name = "No name";
    type = "No type";
}

Pet::Pet(std::string type, std::string name)
{
    this->type = type;
    this->name = name;
}

void Pet::info() const
{
    std::cout << type.c_str() << " " << name.c_str() << "\n";
}

bool Pet::operator < (Pet p) const
{
    if (type != p.type)
    {
        return type < p.type;
    }
    else
    {
        return name < p.name;
    }
}

std::set<Pet> getPetsOfType(std::list<Pet> listOfPet, std::string type)
{
    std::set<Pet> petSet;
    
    for (std::list<Pet>::iterator it = listOfPet.begin(); it != listOfPet.end(); it++)
    {
        if(it->type == type)
        {
            petSet.insert(*it);
        }
    }
    return petSet;
}

