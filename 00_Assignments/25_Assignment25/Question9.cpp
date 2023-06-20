// Define a class Circle and define an instance member function to find the area of the
// circle.

#include<iostream>
using namespace std;

class Circle
{
    float r ,area ,perimeter;
    public :
        void setRadius(float radius)
        {
            r = radius;
        }
        float getRadius()
        {
            return r;
        }

        float getArea()
        {
            return area;
        }

        float getPerimeter()
        {
            return perimeter;
        }

        void calArea()
        {
            area = 3.14 * r * r;
        }
        void calPerimeter()
        {
            perimeter = 2 * 3.14 * r;
        }
};

int main()
{
    Circle c1;
    c1.setRadius(5);
    cout << "Radius = " << c1.getRadius();
    c1.calArea();
    c1.calPerimeter();
    cout << endl << "Area = " << c1.getArea();
    cout << endl << "Perimeter = " << c1.getPerimeter();
    return 0;
}