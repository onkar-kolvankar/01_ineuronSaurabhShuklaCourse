// Write a C++ program to add two complex numbers using operator overloaded by a
// friend function.

#include<iostream>
using namespace std;

class Complex{
    int real , img;

    public:
        Complex(){}
        Complex(int x , int y){
            real = x;
            img = y;
        }

        void setComplex(int x , int y){
            real = x;
            img = y;
        }

        void displayComplex(){
            cout << real << " + " << img << "i" << endl ;
        }

        friend Complex operator+(Complex , Complex);

};

Complex operator+(Complex c1,Complex c2){
    Complex temp;
    temp.real = c1.real + c2.real;
    temp.img = c1.img + c2.img;
    return temp;
}



int main()
{
    Complex c1(2,3) , c2(5,-6) , c3;

    c3 = c1 + c2;
    c3.displayComplex();

    return 0;
}