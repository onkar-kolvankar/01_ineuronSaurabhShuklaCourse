// 10. Write a C++ program to add all the numbers of an array of size 10
#include <iostream>
using namespace std;

int main()
{

    int num[10],sum=0;
    cout<<"Enter 10 numbers:";
    for(int i = 0 ; i < 10 ; i++)
    {
        cin>>num[i];
    }

    for(int i = 0 ; i < 10 ; i++)
    {
        sum += num[i];
    }

    cout<< "Sum of elements of array : "<<sum;

    
    return 0;
}