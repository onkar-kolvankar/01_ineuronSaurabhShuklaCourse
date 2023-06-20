// Define a function to check whether a given number is a Prime number or not.
#include<iostream>
#include<cmath>
using namespace std;
inline bool checkPrime(int);

int main()
{
    int num;

    cout<< "Enter the number :";
    cin >> num;

    if(checkPrime(num))
        printf("Prime num.");
    else
        printf("Not prime");
    return 0;
}
bool checkPrime(int a)
{
    for(int i = 2 ; i <= sqrt(a) ; i++)
    {
        if(a % i == 0)
        {
            return false;
        }
    }
    return true;
}