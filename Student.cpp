#include "Student.hpp"

int Student::getID(){
    return this->id;
}

std::string Student::getName(){
    return this->name;
}

int Student::getAge(){
    return this->age;
}

double * Student::getGrade(){
    return this->p_getGrade;
}

void Student::printGrade(){
    std::cout << "\n";
    std::cout << getID() << " | " << getName() << " | " << getAge() << " | " << std::endl; 
    for (auto &ele:p_getGrade)
        std::cout << ele << " ";
    std::cout << std::endl;    
}