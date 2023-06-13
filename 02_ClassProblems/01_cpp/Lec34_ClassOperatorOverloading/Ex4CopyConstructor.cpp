// Copy constructor
#include <iostream>
using namespace std;

class Complex
{
    int a,b;
    public:

        Complex(int x,int y)
        {
            a = x;
            b = y;
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
    Complex c1(41,56);
    
    c1.displayComplex();

    // here for c1 empty constructor is called.
    // but for c2 copy constructor is called which is created by the compiler automatically NO MATTER WHAT.

    // CONTRUCTOR - 
    //     Complex(Complex &c)
    //     {
    //         a = c.a;
    //         b = c.b;
    //     }

    // Here we use the reference of the passed argument to avoid the Infinite constructor calling.
    Complex c2  = c1;       
    c2.displayComplex();

    return 0;
}