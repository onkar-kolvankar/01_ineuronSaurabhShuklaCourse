#include <iostream>
using namespace std;

class Complex
{
    int a,b;
    public:
        // Constructor 
        Complex(int x , int y)
        {
            a = x;
            b = y;
        }
        // Destructor
        ~Complex()
        {
            cout << endl << "We are now deleting the complex no : ";
            displayComplex();
        }

        void setComplex(int x , int y)
        {
            a = x;
            b = y;
        }
        void displayComplex()
        {
            cout << endl << a << " + " << b << "i";

        }
};

int main()
{
    Complex c1(3 , 4) , c2(12,565);

    return 0;
}