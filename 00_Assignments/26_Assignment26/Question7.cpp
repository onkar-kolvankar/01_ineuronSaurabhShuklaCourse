// Define a class Box and write a program to enter length, breadth and height and
// initialise objects using constructor also define member functions to calculate volume
// of the box.

#include<iostream>
using namespace std;

class Box{
    float length , breadth , height , vol;

    public:
        Box(){}
        Box(int l , int b , int h)
        {
            length = l;
            breadth = b;
            height = h;
        }

        void setLength(int x)
        {
            length = x;
        }
        float getLength()
        {
            return length;
        }
        void setBreadth(int x)
        {
            breadth = x;
        }
        float getBreadth()
        {
            return breadth;
        }
        void setHeigth(int x)
        {
            height = x;
        }
        float getHeight()
        {
            return height;
        }

        void calVol()
        {
            vol = length * breadth * height;
        }

        float getVol()
        {
            return vol;
        }


};

int main()
{
    Box b1(5,6,7) , b2 , b3;
    b2.setLength(1);
    b2.setHeigth(2);
    b2.setBreadth(3);
    b1.calVol();
    b2.calVol();

    cout << "b1 = " << b1.getVol() << endl << "b2 = " << b2.getVol();
    return 0;
}