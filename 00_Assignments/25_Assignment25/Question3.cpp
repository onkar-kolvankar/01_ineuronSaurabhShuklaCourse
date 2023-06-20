// Define a class Factorial and define an instance member function to find the Factorial
// of a number using class.
#include<iostream>
using namespace std;

class Factorial
{
    int n , factorial = 1;
    public:
        void setNum(int num)
        {
            n = num;
        }
        int getNum()
        {
            return n;
        }
        int getFactorial()
        {
            return factorial;
        }
        void calFactorial()
        {
            if(n == 1 || n == 0)
            {
                 factorial = 1;
            }
            else
            {
                for(int i = 1 ; i <= n ; i++)
                {
                    factorial = factorial * i;
                }
            }
            
        }
};

int main()
{
    Factorial f1;
    f1.setNum(5);
    f1.calFactorial();
    cout<< "Num = " << f1.getNum() << " Factorial = " << f1.getFactorial();
    return 0;
}