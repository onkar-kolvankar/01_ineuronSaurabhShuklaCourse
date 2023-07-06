// Define a class student and write a program to enter student details using constructor
// and define member function to display all the details.

#include<iostream>
#include<string.h>
using namespace std;

class Student{

    int roll;
    char name[30],standard[20];

    public:
        Student(){
            cout << "Enter student roll :";
            cin >> roll;
            fflush(stdin);
            cout << "Enter the student name :";
            cin.getline(name,30);
            cout << "Enter the student class :";
            cin.getline(standard,20);
        }

        //
        void setRoll(int x)
        {
            roll = x;
        }
        int getRoll()
        {
            return roll;
        }
        void getName()
        {
            cout <<" " << name;
        }
        void getStandard()
        {
            cout << " " << standard;
        }

};

int main()
{   
    Student s1,s2;
    cout << endl << s1.getRoll() ;
    s1.getName() ;
    s1.getStandard();

    cout << endl << s2.getRoll() ;
    s2.getName() ;
    s2.getStandard();

    return 0;
}