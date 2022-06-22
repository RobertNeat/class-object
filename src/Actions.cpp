#include "Actions.h"

#include <iostream>
#include <cmath>
using namespace std;

void Actions::inputData()
{
    cout<<"Input a:";
    cin>>a;
    cout<<"Input b:";
    cin>>b;
}

void Actions::displayData()
{
    cout<<endl<<"Sum (a+b):"<<sum();
    cout<<endl<<"Difference (a-b):"<<difference();
    cout<<endl<<"Multiplication (a*b):"<<multiplication();
    cout<<endl<<"Division (a/b):";
    division();
    cout<<endl;
    cout<<"Exponentiation (a^b):"<<exponentiation()<<endl;
}

int Actions::sum(){return a+b;}
int Actions::difference(){return a-b;}
int Actions::multiplication(){return a*b;}
void Actions::division(){
    if(b!=0){
        cout<<a/b<<" rest "<<a%b;
    }
    else{
        cout<<"Division error";
    }
}

float Actions::exponentiation(){
    return pow(a,b);
}
