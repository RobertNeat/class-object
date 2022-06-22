#include "Worker.h"
#include <iostream>
using namespace std;

void Worker::read()
{
    cout<<"Input name: ";
    cin>>name;
    cout<<"Input surname: ";
    cin>>surname;
    cout<<"Input hourly rate: ";
    cin>>hourRate;
    cout<<"Input hour count: ";
    cin>>hourCount;
    cout<<"Employment date:"<<endl<<"Year:";
    cin>>employmentDate.year;
    cout<<"Month:";
    cin>>employmentDate.month;
    cout<<"Day: ";
    cin>>employmentDate.day;
}

float Worker::calculateWage()
{
    return hourRate*hourCount;
}

void Worker::display(){
cout<<endl<<name<<" "<<surname<<" employed "<<employmentDate.year<<"."<<employmentDate.month<<"."<<employmentDate.day<<" will earn: "<<calculateWage()<<endl;
}
