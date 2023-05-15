// Define overloaded functions to calculate area of circle, area of rectangle and area of
// triangle
#include<iostream>
#include<cmath>
using namespace std;
float getArea(float);
float getArea(float ,float );
float getArea(float  , float  , float );
int main()
{
    int r, l,b,s1,s2,s3,choice;
    cout<< "Enter whose area you want to find :"<<endl;
    cout<<"1. Circle\n2. Rectangle\n3. Triangle"<<endl;
    cin>>choice;

    switch(choice)
    {
        case 1:
            cout << "\nEnter the radius of circle :";
            cin >> r;
            cout<<"\nArea of Circle = " << getArea(r);
            break;

        case 2:
            cout << "\nEnter the length and width of rectangle :";
            cin >> l >> b;
            cout<<"\nArea of Rectangle = " << getArea(l,b);
            break;

        case 3:
            cout << "\nEnter the 3 sides of triangle :";
            cin >> s1 >> s2 >> s3;
            cout<<"\nArea of triangle = " << getArea(s1,s2,s3);
            break;

        default:
            cout << "\nPlease enter valid choice.";
    }

    return 0;
}
float getArea(float radius)
{
    return 3.14 * radius * radius;
}
float getArea(float length,float breadth)
{
    return length * breadth;
}
float getArea(float s1 , float s2 , float s3)
{
    float s = (s1 + s2 + s3)/2;
    return sqrt(s * (s - s1) * (s - s2) * (s - s3));
}


