// Write a C++ program to overload unary operators that is increment and decrement

#include<iostream>
using namespace std;

class Complex{
    int real , img;

    public:
        Complex(){}

        Complex(int x , int y)
        {
            real = x;
            img = y;
        }
        void setComplex(int x , int y)
        {
            real = x;
            img = y;
        }
        void displayComplex()
        {
            cout << real << " + " << img << "i" << endl;
        }

        // operator overloading

        // Post increament. needs the dummy variable to differentiate bw post and pre
        Complex operator++(int dummny_var)
        {
            Complex temp;
            temp.real = real++;
            temp.img = img;
            return temp;
        }
        // pre increament
        Complex operator++()
        {
            Complex temp;
            temp.real = ++real;
            temp.img = img;
            return temp;
        }

        // Post decreament
        Complex operator--(int dummny_var)
        {
            Complex temp;
            temp.real = real--;
            temp.img = img;
            return temp;
        }

        // pre decreament
        Complex operator--()
        {
            Complex temp;
            temp.real = --real;
            temp.img = img;
            return temp;
        }




};

int main()
{
    Complex c1(2,3),c2;

    c2 = c1++;

    cout << "c2 = ";
    c2.displayComplex();
    cout << "c1 = ";
    c1.displayComplex();

    c2 = ++c1;
    cout << "c2 = ";
    c2.displayComplex();
    cout << "c1 = ";
    c1.displayComplex();

    c1++;
    cout << endl;
    cout << "c1 = ";
    c1.displayComplex();

    cout<< "Decreament operations" << endl;

    c2 = c1--;
    cout << "c2 = ";
    c2.displayComplex();
    cout << "c1 = ";
    c1.displayComplex();

    c2 = --c1;
    cout << "c2 = ";
    c2.displayComplex();
    cout << "c1 = ";
    c1.displayComplex();

    c1--;
    cout << endl;
    cout << "c1 = ";
    c1.displayComplex();


    

    return 0;
}