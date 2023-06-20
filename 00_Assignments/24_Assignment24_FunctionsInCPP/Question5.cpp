// Define a function to check whether a given number is a term in a Fibonacci series or
// not
// 1 1 2 3 5 8 13 21
#include<iostream>
using namespace std;
void inFibbonnacci(int);
int main()
{
    int num;
    cout << "Enter a number to check if it is in fibonnacci series:";
    cin >> num;

    inFibbonnacci(num);

    return 0;
}

void inFibbonnacci(int n)
{
    int a = 1 , b = 1 , temp;
    while(b < n)
    {
        temp = b;
        b = a+b;
        a = temp;
        // cout << endl << "b = " << b << " a = " << a;
    }
    if(b == n)
        cout<< n << " is in fibonnacci series";
    else
        cout<< n << " is not in fibonnacci series";
    
}
