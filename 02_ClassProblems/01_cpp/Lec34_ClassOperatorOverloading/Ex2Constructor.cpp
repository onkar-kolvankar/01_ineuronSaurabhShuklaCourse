// Simple constructor example.
#include <iostream>
using namespace std;

class Complex
{
    private:
        int a,b;
    public :

        Complex()
        {
            a = 0 ;
            b = 0;
        }

        void setComplex(int x,int y)
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
    Complex c1,c2;
    c1.displayComplex();    // if you call display before intializing then it will print garbage val.    
    c2.displayComplex();
    return 0;
}