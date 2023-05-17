// Define a class Area and define instance member functions to find the area of the
// different shapes like square, rectangle , circle etc
#include<iostream>
using namespace std;

class Area
{
    float radius= 0, length = 0, breadth=0 , base=0 , height=0;
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

        float getCircleArea()
        {
            return 3.14 * radius * radius;
        }
        float getRectangleArea()
        {
            return length * breadth;
        }
        float getTriangleArea()
        {
            return 0.5 * base * height;
        }
};

int main()
{
    Area a;
    a.setCircleRadius(5);
    a.setRectangleSides(4,7);
    a.setTriangleBaseHeight(4,10);

    cout << endl << "Area of Circle = " << a.getCircleArea();
    cout << endl << "Area of Rectangle = " << a.getRectangleArea();
    cout << endl << "Area of Triangle = " << a.getTriangleArea();

    return 0;
}