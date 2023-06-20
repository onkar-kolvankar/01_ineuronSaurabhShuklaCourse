// Define a class Area and define instance member functions to find the area of the
// different shapes like square, rectangle , circle etc
#include<iostream>
using namespace std;

class Area
{
    float radius= 0, length = 0, breadth=0 , base=0 , height=0 ,area;
    public:
        void setCircleRadius(float r)
        {
            radius = r;
        }
        void setRectangleSides(float l , float b)
        {
            length = l;
            breadth = b;
        }
        void setTriangleBaseHeight(float b , float h)
        {
            base = b;
            height = h;
        }

        float getArea()
        {
            return area;
        }

        void getCircleArea()
        {
            area =  3.14 * radius * radius;
        }
        void getRectangleArea()
        {
            area = length * breadth;
        }
        void getTriangleArea()
        {
            area = 0.5 * base * height;
        }
};

int main()
{
    Area a1,a2,a3;
    a1.setCircleRadius(5);
    a2.setRectangleSides(4,7);
    a3.setTriangleBaseHeight(4,10);

    a1.getCircleArea();
    a2.getRectangleArea();
    a3.getTriangleArea();

    cout << endl << "Area of Circle = " << a1.getArea();
    cout << endl << "Area of Rectangle = " << a2.getArea();
    cout << endl << "Area of Triangle = " << a3.getArea();

    return 0;
}