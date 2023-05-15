//  Write a function using the default argument that is able to add 2 or 3 numbers.

#include<iostream>
using namespace std;
int addNum(int , int , int = 0);
int main()
{
    int choice , n1, n2 , n3;
    cout<< "you want to add 2 nos or 3 ? ";
    cin >> choice;
    if(choice == 2)
    {
        cout << "\nEnter 2 nos:";
        cin >> n1 >> n2;
        cout << "\nSum of " << n1 << " and " << n2 << " = " << addNum(n1,n2);
    }
    else if(choice == 3)
    {
        cout << "\nEnter 3 nos:";
        cin >> n1 >> n2 >> n3;
        cout << "\nSum of " << n1 << " and " << n2 << " and " << n3 << " = " << addNum(n1,n2,n3);
    }
    else
    {
        cout<< "Please enter valid choice.";
    }


    return 0;
}
int addNum(int a , int b , int c)
{
    return a + b + c;
}