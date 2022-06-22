#ifndef STUDENT_H
#define STUDENT_H
#include <iostream>
using namespace std;

class Student
{
    private:
        char name[10];
        char surname[10];
        float exams[3];
    public:
        void readStudentData();
        float arithmeticAverage();
        void displayStudentData();
};

#endif // STUDENT_H
