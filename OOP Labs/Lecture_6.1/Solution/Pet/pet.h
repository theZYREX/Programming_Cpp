//
//  pet.h
//  OOlabs
//
//  Created by Илья Овсянников on 27.11.2025.
//
#ifndef PET_H
#define PET_H

#include <iostream>
#include <set>
#include <list>

class Pet
{
public:
    std::string name;
    std::string type;
    Pet();
    Pet(std::string type, std::string name);
    void info() const;
    bool operator < (Pet p) const;
};

std::set<Pet> getPetsOfType(std::list<Pet> listOfPet, std::string type);

#endif
