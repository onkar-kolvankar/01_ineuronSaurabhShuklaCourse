// Write a prg with the class Complex which has function to add the two complex nos.

#include <iostream>
using namespace std;

class Complex{
    private:
        int realPart,imgPart;

    public:
        void setComplex(int real, int img)
        {
            realPart = real;
            imgPart = img;
            
        }

        void displayComplex()
        {
            cout << endl << "Complex No = " << realPart << " + " << imgPart << "i";
        }

        Complex add(Complex c2)
        {
            Complex c3;
            c3.realPart = realPart + c2.realPart;
            c3.imgPart = imgPart + c2.imgPart;
            return c3;
        }

};


int main()
{
    Complex c1,c2,c3;
    c1.setComplex(2,5);
    c2.setComplex(6,8);
    c1.displayComplex();
    c2.displayComplex();

    c3 = c1.add(c2);
    c3.displayComplex();



    return 0;
}