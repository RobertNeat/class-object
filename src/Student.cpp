#include "Student.h"
#include <iostream>
using namespace std;


void Student::readStudentData()
{
    cout<<"Student name: ";
    cin>>name;
    cout<<"Student surname: ";
    cin>>surname;
    cout<<"Grades:"<<endl;
    for(int a=0;a<3;a++){
        cout<<"grade "<<a+1<<" : ";
        cin>>exams[a];
    }
}

float Student::arithmeticAverage()
{
    if(exams[0]!=0 && exams[1]!=0 && exams[2]!=0){
        return (exams[0]+exams[1]+exams[2])/3;
    }
}

void Student::displayStudentData(){
    cout<<"Student: "<<name<<" "<<surname<<" got arithmetic average equeal to: "<<arithmeticAverage()<<endl;
    bool flag=false;
    for(int a=0;a<3;a++){
        if(exams[a]<2 || exams[a]>5){
            flag=true;
        }
    }
    if(flag){cout<<"!Attention- student got not allowed grade!"<<endl;}
}
