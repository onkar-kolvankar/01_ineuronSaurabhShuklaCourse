//  Define a class Cube and calculate Volume of Cube and initialise it using constructor.

#include<iostream>
using namespace std;

class Cube{
    float s ,vol;

    public:
        // empty constructor
        Cube(){}

        Cube(float x)
        {
            s = x;
        }

        void setSide(float x)
        {
            s = x;
        }
        float getSide()
        {
            return s;
        }
        float getVolume()
        {
            return vol;
        }

        void calVolume()
        {
            vol = s * s;
        }



};

int main()
{
    Cube c1(3) , c2(8.2) ,c3;
    c3.setSide(5);
    c3.calVolume();
    c1.calVolume();
    c2.calVolume();

    cout<< "Vol c1 = " << c1.getVolume() << endl;
    cout<< "Vol c2 = " << c2.getVolume() << endl;
    cout<< "Vol c3 = " << c3.getVolume() << endl;


    return 0;
}