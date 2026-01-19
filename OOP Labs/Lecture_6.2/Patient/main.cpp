#include <iostream>
#include <queue>
#include <vector>
#include "patient.h"

struct PatientComparator {
    bool operator()(const Patient& a, const Patient& b) const {
        return a < b;
    }
};

int main() {
    std::queue<Patient> arrivalQueue;
    std::priority_queue<Patient, std::vector<Patient>, PatientComparator> priorityQueue;

    arrivalQueue.push(Patient("Иванов И.И.", 45, PriorityLevel::LOW));
    arrivalQueue.push(Patient("Петров П.П.", 60, PriorityLevel::HIGH));
    arrivalQueue.push(Patient("Сидоров С.С.", 30, PriorityLevel::LOW));
    arrivalQueue.push(Patient("Козлова К.К.", 25, PriorityLevel::MEDIUM));
    arrivalQueue.push(Patient("Смирнов С.С.", 50, PriorityLevel::HIGH));
    arrivalQueue.push(Patient("Васильев В.В.", 35, PriorityLevel::LOW));

    std::cout << "Поступление пациентов в очередь:" << std::endl;
    
    while (!arrivalQueue.empty()) {
        Patient p = arrivalQueue.front();
        arrivalQueue.pop();
        p.info();
        priorityQueue.push(p);
    }

    std::cout << "\n Приоритетная очередь:" << std::endl;
    
    while (!priorityQueue.empty()) {
        Patient p = priorityQueue.top();
        priorityQueue.pop();
        p.info();
    }

    return 0;
}
