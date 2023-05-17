// Define a class LargestNumber and define an instance member function to find the
// Largest of three Numbers using the class.
// 
#include<iostream>
using namespace std;

class LargestNumber
{
    public:
        int getLargest(int a , int b , int c)       
        {
            if(a >= b && a >= c)
                return a;
            else if(b >= a && b >= c)
                return b;
            else 
                return c;
        }
};

int main()
{
    LargestNumber l1;
    int a,b,c;
    cout << "Enter the 3 nos:";
    cin >> a >> b >> c;

    cout << endl << "Largest no :" << l1.getLargest(a,b,c);


    return 0;
}