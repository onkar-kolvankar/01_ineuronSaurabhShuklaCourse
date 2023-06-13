// overloading + operator to add two complex objects.
#include <iostream>
using namespace std;

class Complex 
{
    int a,b;
    public:
        // constructor;
        Complex(int l,int m)
        {
            a = l;
            b = m;
        }
        Complex(){ }

        void setComplex(int x , int y)
        {
            a = x;
            b = y;
        }
        void displayComplex()
        {
            cout << endl << a << " + " << b << "i";
        }

        // operator overloading.
        // we need to use 'operator' keyword before writing the function name
        Complex operator+(Complex c2)
        {
            Complex c;
            c.a = a + c2.a;
            c.b = b + c2.b;
            return c;
        }

        Complex operator-()
        {
            Complex c;
            c.a = -a;
            c.b = -b;

            return c;
        }
};

int main()
{
    Complex c1(78,41),c2(7,96) ,c3,c4,c5,c6;
    // Method 1 - to call the operation function
    c3 = c1.operator+(c2);
    // Method 2 - to call the operation function
    c4 = c1 + c2;
    // THEORY - 
    // here c1 is caller object and it takes the c2 as the argument and returns the Complex ojbect.8
    c3.displayComplex();
    c4.displayComplex();

    // UNARY OPERATOR OVERLOADING
    // Method 1 - to call the operation function
    c4 = -c2;       // c2 is a caller object

    // Method 2- 
    c5 = c1.operator-();        // c1 is a caller object

    c4.displayComplex();
    c5.displayComplex();
    

    return 0;
}
