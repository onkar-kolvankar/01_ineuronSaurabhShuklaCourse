#include<iostream>
using namespace std;

class MyItem{
    int quantity;
    public :
    static int price;   // static member variable declaration
    // static int price = 9    // ERROR - can't initialize static variable in class.
};

// if not initialized then static member variable has DEFAULT = 0
int MyItem :: price;        // Static member variable definition
// int MyItem :: price = 19;        // you can initialize static member variable here.

int main()
{
    MyItem :: price ;
    cout << "m1 quantitiy = " << MyItem :: price;


    return 0;
}