//
//  patient.h
//  OOlabs
//
//  Created by Илья Овсянников on 10.12.2025.
//
#ifndef PATIENT_H
#define PATIENT_H

#include <string>
#include <chrono>

enum class PriorityLevel {
    LOW = 0,
    MEDIUM = 1, //Инвалид
    HIGH = 2 //Ветеран
};

class Patient {
public:
    std::string name;
    int age;
    PriorityLevel priority;
    std::chrono::steady_clock::time_point arrivalTime;
    void info();

    Patient(std::string name, int age, PriorityLevel p);

    bool operator<(const Patient& other) const;
};

#endif
