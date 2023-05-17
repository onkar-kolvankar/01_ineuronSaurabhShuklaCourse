// Define a class Circle and define an instance member function to find the area of the
// circle.

#include<iostream>
using namespace std;

class Circle
{
    int r ;
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
            return 3.14 * r * r;
        }
        float getPerimeter()
        {
            return 2 * 3.14 * r;
        }
};

int main()
{
    Circle c1;
    c1.setRadius(5);
    cout << "Radius = " << c1.getRadius();
    cout << endl << "Area = " << c1.getArea();
    cout << endl << "Perimeter = " << c1.getPerimeter();
    return 0;
}