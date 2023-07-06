// Define a class Date and write a program to Display Date and initialise date object
// using Constructors

#include<iostream>
using namespace std;

class Date{
    int day,month,year;
    public:
        // constructors
        Date(){}

        Date(int d,int m,int y){
            day = d;
            month = m;
            year = y;
        }

        //
        void setDate(int d,int m,int y)
        {
            day = d;
            month = m;
            year = y;
        }
        void getDate()
        {
            cout <<endl<< day <<"/"<< month << "/" << year;
        }

};

int main()
{
    Date d1(27,6,2023),d2;
    d2.setDate(12,5,2012);

    d1.getDate();
    d2.getDate();

    return 0;
}