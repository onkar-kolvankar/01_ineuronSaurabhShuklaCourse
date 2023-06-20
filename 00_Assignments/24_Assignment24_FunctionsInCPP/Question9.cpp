// Write functions using function overloading to find a maximum of two numbers and
// both the numbers can be integer or real.
#include<iostream>
using namespace std;

float getMax(float , float);
int getMax(int , int);


int main()
{
    int x  = 7, y  = 45;
    float l = 7.25 , m = 7.10;

    cout<< "max = " << getMax(x,y) << endl;
    cout << "max = " << getMax(l,m) << endl;
    


    return 0;
}
float getMax(float a , float b)
{
    if(a > b)
        return a;
    else 
        return b;
}

int getMax(int a , int b)
{
    if(a > b)
        return a;
    else 
        return b;
}
