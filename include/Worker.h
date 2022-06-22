#ifndef WORKER_H
#define WORKER_H
#include <iostream>
using namespace std;

struct date{
int year;
int month;
int day;
};

class Worker
{
    private:
        char  name[10];  //fields
        char surname[10];
        float hourRate;
        int hourCount;
        date employmentDate;
    public:
        void read(); //methods
        float calculateWage();
        void display();
};

#endif // WORKER_H
