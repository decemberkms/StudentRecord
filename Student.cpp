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

std::vector<double> Student::getGrade(){
    return this->grade;
}

void Student::printGrade(){
    std::cout << "\n";
    std::cout << getID() << " | " << getName() << " | " << getAge() << " | " << std::endl; 
    for (auto &ele:grade)
        std::cout << ele << " ";
    std::cout << std::endl;    
}