// Define a class Complex to represent a complex number. Declare instance member
// variables to store real and imaginary part of a complex number, also define instance
// member functions to set values of complex number and print values of complex
// number
#include<iostream>
using namespace std;

class Complex
{
    
    int realPart;
    int imgPart;

    public:
        void setValues(int r,int img)
        {
            realPart = r;
            imgPart = img;
        }

        void displayComplexNo()
        {
            cout << "Complex No = " << realPart << " + " << imgPart << "i";
        }
};


int main()
{
    Complex c1,c2;
    c1.setValues(4,5);
    c1.displayComplexNo();

    return 0;
}