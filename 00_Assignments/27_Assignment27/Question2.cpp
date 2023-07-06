// Write a C++ program to overload unary operators that is increment and decrement

#include<iostream>
using namespace std;

class Complex{
    int a , b;

    public:
        Complex(){}

        Complex(int x , int y)
        {
            a = x;
            b = y;
        }

        void setComplex(int x , int y)
        {
            a = x;
            b = y;
        }
        int getReal()
        {
            return a;
        }
        int getImg()
        {
            return b;
        }
        void displayComplex()
        {
            cout << a << " + " << b << "i";
        }

        // operator overloading
        Complex operator++()
        {
            Complex temp;
            temp.a = a++;
            temp.b = b;
            return temp;
        }
};

int main()
{
    Complex c1(2,3),c2;

    c2 = c1++;
    c2.displayComplex();

    return 0;
}