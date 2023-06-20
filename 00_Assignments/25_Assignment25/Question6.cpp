// Define a class Square to find the square of a number and write a C++ program to
// Count number of times a function is called.

#include<iostream>
using namespace std;

class Square
{
    int num , square;
    static int countFunctionCall;   // default value of static varialbe is 0
    
    public:

        void setNum(int x)
        {
            num = x;
        }
        int getNum()
        {
            return num;
        }
        int getSquare()
        {
            return square;
        }
        
        void calSquare()
        {
            countFunctionCall++;
            square = num * num;

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
    s1.setNum(5);
    s2.setNum(7);
    s3.setNum(12);

    s1.calSquare();
    s2.calSquare();
    s3.calSquare();

    cout << "num1 = " << s1.getNum() << " square = " << s1.getSquare() << endl;
    cout << "num2 = " << s2.getNum() << " square = " << s2.getSquare() << endl;
    cout << "num3 = " << s3.getNum() << " square = " << s3.getSquare() << endl;

    cout << endl << "function count = " << Square :: getCountOfFunctionCall(); // when your static instance variable is private you need to make setter and getter methods 
    // AND  you must have them as static so that you can call them without using instance/object of class by using Class_name :: Function_name()
    return 0;
}