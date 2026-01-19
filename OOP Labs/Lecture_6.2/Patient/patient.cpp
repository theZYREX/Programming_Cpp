//
//  patient.cpp
//  OOlabs
//
//  Created by Илья Овсянников on 10.12.2025.
//
#include "patient.h"
#include <iostream>

Patient::Patient(std::string name, int age, PriorityLevel p)
:name(name), age(age), priority(p), arrivalTime(std::chrono::steady_clock::now()){}

bool Patient::operator<(const Patient& other) const{
    if (priority != other.priority){
        return priority < other.priority;
    }
    return arrivalTime > other.arrivalTime;
}

void Patient::info()
{
    std::cout <<"Пациент: " << name << ", возраст" << age << ", приоритет" << static_cast<int>(priority) << std::endl;
}



