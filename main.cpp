#include <iostream>
#include "Actions.h"
#include "Worker.h"
#include "Student.h"

using namespace std;

void menu(){
    cout<<"================================================="<<endl;
    cout<<"|\tMenu:\t\t\t\t\t|"<<endl<<"|\t0 End\t\t\t\t\t|"<<endl<<"|\t1 Arithmetic operations\t\t\t|"<<endl<<"|\t2 Employee's fee\t\t\t|"<<endl<<"|\t3 Student average\t\t\t|"<<endl;
    cout<<"================================================="<<endl;
    cout<<"Input position index:";
}

int main()
{
    int a=0;
    menu();
    cin>>a;
    while(a>0 && a<=3){
            switch (a)
            {
            case 1:
                Actions actions;
                actions.inputData();
                actions.displayData();
                menu();
                cin>>a;
                break;
            case 2:
                Worker worker;
                worker.read();
                worker.display();
                menu();
                cin>>a;
                break;
            case 3:
                Student student;
                student.readStudentData();
                student.displayStudentData();
                menu();
                cin>>a;
                break;
            }
    }
}
