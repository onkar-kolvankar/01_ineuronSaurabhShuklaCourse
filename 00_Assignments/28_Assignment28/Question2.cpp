// Define a class Complex with appropriate instance variables and member functions.
// One of the functions should be setData() to set the properties of the object. Make
// sure the names of formal arguments are the same as names of instance variables
#include<iostream>
using namespace std;

class Complex{

    private:
        int real , img;

    public:
        Complex(){}

        Complex(int real,int img)
        {
            real = real;
            img = img;
        }

        // functions 
        void setData(int real,int img){
            real = real;
            img = img;
        }
        void display()
        {
            cout << real << " + (" << img << ")i" << endl;
        }

};

int main()
{
    Complex c1;
    Complex c2(3,4);

    c1.setData(4,5);
    c1.display();
    c2.display();

    c2.setData(50,-34);
    c2.display();


    return 0;
}