#include<iostream>
using namespace std;

class MyItem2
{
    int a , b;
    // Private - here static variable is private
    // so to access it outside class you need to make getter and setter methods.
    static int z; 

    public:
        static void setStaticZ(int m)
            {
                z = m;
            }  
        static int displayStaticZ()
        {
            return z;
        }
};

int MyItem2 :: z = 10;

int main()
{
    MyItem2 m1;
    MyItem2 :: setStaticZ(5);
    cout << MyItem2 :: displayStaticZ();
    


    return 0;
}