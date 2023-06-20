//  Define a class Rectangle and define an instance member function to find the area of
// the rectangle
#include<iostream>
using namespace std;

class Rectangle
{
    private:
        float length , breadth , area;

    public:
        void setRectangle(float a , float b)
        {
            length = a ;
            breadth = b;
        }
        float getLength()
        {
            return length;
        }
        float getBreadth()
        {
            return breadth;
        }

        float getArea()
        {
            return area;
        }

        void calRectangleArea()
        {
            area = length * breadth;
        }

};

int main()
{

    Rectangle r1;
    r1.setRectangle(4,5);
    r1.calRectangleArea();
    cout << "Length = " << r1.getLength() << " Breadth = " << r1.getBreadth() << " Area = " << r1.getArea();

    return 0;
}