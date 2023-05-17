// Define a class Square to find the square of a number and write a C++ program to
// Count number of times a function is called.

#include<iostream>
using namespace std;

class Square
{
    static int countFunctionCall;   // default value of static varialbe is 0
    
    public:
        
        float getSquare(float a)
        {
            countFunctionCall++;
            return a * a;

        }

        static int getCountOfFunctionCall()
        {
            return countFunctionCall;
        }
};

int Square :: countFunctionCall = 0;

int main()
{
    Square s1,s2,s3;
    s1.getSquare(5);
    s2.getSquare(7);
    s1.getSquare(18);
    s1.getSquare(18);
    s3.getSquare(17);

    cout << Square :: getCountOfFunctionCall(); // when your static instance variable is private you need to make setter and getter methods 
    // AND  you must have them as static so that you can call them without using instance/object of class by using Class_name :: Function_name()
    return 0;
}