#ifndef _STUDENT_H_
#define _STUDENT_H_
#include <string>
#include <iostream>
#include <vector>

class Student
{
private:
    /* data */
    int id;
    std::string name;
    int age;
    std::vector<double> grade;
    
public:
    Student(int id_val, std::string name_val, int age_val, std::vector<double> grade_val);
    Student(int id_val, std::string name_val, int age_val);
    Student(int id_val, std::string name_val);
    Student(int id_val);
    Student();
    
    ~Student();

    int getID();
    std::string getName();
    int getAge();
    std::vector<double> getGrade();

    void printGrade();

};

//Constructor initialisation list
Student::Student(int id_val, std::string name_val, int age_val, std::vector<double> grade_val)
    :id{id_val}, name{name_val}, age{age_val}, grade{grade_val}{
}

Student::Student(int id_val, std::string name_val, int age_val)
    :Student {id_val, name_val, age_val, {-1}}{
}

Student::Student(int id_val, std::string name_val)
    :Student {id_val, name_val, -1, {-1}}{
}

Student::Student(int id_val)
    :Student {id_val, "None", -1, {-1}}{
}

Student::Student()
    :Student {-1, "None", -1, {-1}}{
}

Student::~Student()
{
}




#endif