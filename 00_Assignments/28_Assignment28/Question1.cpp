// Define a class Complex with appropriate instance variables and member functions.
// Overload following operators
// a. << insertion operator
// b. >> extraction operator
#include<iostream>
#include<ostream>
#include<istream>
using namespace std;

class Complex{

    private:
        int real , img;

    public:
        Complex(){}
        Complex(int real_part,int img_part){
            real = real_part;
            img = img_part;
        }

        void display(){

            cout << real << " + (" << img << ")i" << endl; 
        }

        friend ostream& operator<<(ostream &, Complex);

        friend istream& operator>>(istream &,Complex &);


};

ostream& operator<<(ostream &os , Complex c)
{
    cout << c.real << " + (" << c.img << ")i" << endl;
    return os;
}

istream& operator>>(istream &os , Complex &c)
{
    cout << "Enter the real part :";
    cin >> c.real;
    cout << "Enter the imaginary part:";
    cin >> c.img;

    return cin;
}




int main()
{
    Complex c1(4,-9);
    c1.display();
    cout << c1;

    Complex c2;
    cin >> c2;
    cout << c2;


    return 0;
}