#ifndef _STUDENT_H_
#define _STUDENT_H_
#include <string>
#include <iostream>

class Student
{
private:
    /* data */
    int id;
    std::string name;
    int age;
    double *p_grade;
    
public:
    Student(int id_val, std::string name_val, int age_val);
    Student(int id_val, std::string name_val);
    Student();
    
    ~Student();

    int getID();
    std::string getName();
    int getAge();
    double *getGrade();

    void printGrade();

};

//Constructor initialisation list
Student::Student(int id_val, std::string name_val, int age_val)
    :id{id_val}, name{name_val}, age{age_val}{
        std::cout << "\nType the number of subject\n";
        int subj;
        std::cin >> subj; 
        p_grade = new double[subj];
        std::cout << "\nType the grade of each subject\n";
        

}

Student::Student(int id_val, std::string name_val)
    :Student {id_val, name_val, -1}{
}

Student::Student()
    :Student {-1, "None", -1}{
}


//Destructor
Student::~Student()
{
}




#endif