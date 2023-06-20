// Define a function to find the highest value digit in a given number.
#include<iostream>
using namespace std;
int getMaxValueDigit(int);
int main()
{
    int num;
    cout << "Enter the number :";
    cin >> num;

    cout<< "\nHighest value digit in num = " << getMaxValueDigit(num) << endl;

    return 0;
}
int getMaxValueDigit(int a)
{
    int highestDigit = -999;

    while( a >= 10)
    {
        if((a%10) > highestDigit)
            highestDigit = a % 10;
        
        a /= 10;
    }
    if(a > highestDigit)
    {
        highestDigit = a;
    }


    return highestDigit;
}