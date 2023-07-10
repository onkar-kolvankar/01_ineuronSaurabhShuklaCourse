// Define a class Complex with appropriate instance variables and member functions.
// Define following operators in the class:
// a. +
// b. -
// c. *
// d. ==

#include<iostream>
using namespace std;

class Complex 
{
    int a , b;

    public:
        Complex (){}
        Complex(int x , int y)
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
            cout<< a << " + " << b << "i" << endl;
        }

        Complex operator+(Complex c2){
            Complex temp;
            temp.a = a + c2.a;
            temp.b = b + c2.b;
            return temp;
        }

        Complex operator-(Complex c2){
            Complex temp;
            temp.a = a - c2.a;
            temp.b = b - c2.b;
            return temp;
        }

        Complex operator*(Complex c2)
        {
            Complex temp;
            temp.a = (a * c2.a) - (b * c2.b);
            temp.b = (a * c2.b) + (b * c2.a);
            return temp;
        }

        bool operator==(Complex c2)
        {
            if(a == c2.a && b == c2.b)
                return true;
            else
                return false;
        }
};

int main()
{
    Complex c1(2,3) , c2(4,5) ,c3,c4(4,5);
    c3 = c1 + c2;
    c3.displayComplex();

    c3 = c1 - c2;
    c3.displayComplex();

    c3 = c1 * c2;
    c3.displayComplex();

    if(c1 == c2){
        cout << "c1 is equal to c2." << endl;
    }
    else{
        cout << "c1 not equal to c2" << endl;
    }
    
    if(c4 == c2){
        cout << "c4 equal to c2." << endl;
    }
    else{
        cout << "c4 not equal to c2" << endl;
    }

    return 0;
}