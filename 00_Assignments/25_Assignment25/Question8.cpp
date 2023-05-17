//  Define a class Rectangle and define an instance member function to find the area of
// the rectangle
#include<iostream>
using namespace std;

class Rectangle
{
    private:
        float length , breadth;

    public:
        void setRectangle(float a , float b)
        {
            length = a ;
            breadth = b;
        }
        void displayRectangleSides()
        {
            cout << endl << "Length of Rectangle = " << length << " Breadth of Rectangle = " << breadth;
        }
        void findRectangleArea()
        {
            cout << endl << "Area of Rectangle = " << length * breadth;
        }

};

int main()
{

    Rectangle r1;
    r1.setRectangle(4,5);
    r1.displayRectangleSides();
    r1.findRectangleArea();

    return 0;
}