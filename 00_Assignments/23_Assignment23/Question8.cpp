// 8. Write a C++ program to swap values of two int variables without using third variable
#include <iostream>
using namespace std;

int main()
{
    int a , b;
    cout<< "Enter the 2 nos:";
    cin >> a >> b;
    a = a + b;
    b = a - b;
    a = a - b;
    cout<<"a = "<< a << " b = "<< b;
    

    
    return 0;
}