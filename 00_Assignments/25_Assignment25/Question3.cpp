// Define a class Factorial and define an instance member function to find the Factorial
// of a number using class.
#include<iostream>
using namespace std;

class Factorial
{
    public:
        int getFactorial(int num)
        {
            

            if(num == 1 || num == 0)
                return 1;

            return num * getFactorial(num - 1);
        }
};

int main()
{
    Factorial f1;
    cout<< f1.getFactorial(6);
    return 0;
}