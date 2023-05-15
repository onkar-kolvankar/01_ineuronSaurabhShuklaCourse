// Define a function to swap data of two int variables using call by reference
#include<iostream>
using namespace std;
void swapNum(int &, int &);
int main()
{
    int n1,n2;
    cout<<"Enter 2 nos:";
    cin >> n1 >> n2;

    swapNum(n1,n2);

    cout << "Value of n1 = " << n1 << " , n2 = " << n2;

    return 0;
}

void swapNum(int &a,int &b)
{
    a = a + b;
    b = a - b;
    a = a - b;
}