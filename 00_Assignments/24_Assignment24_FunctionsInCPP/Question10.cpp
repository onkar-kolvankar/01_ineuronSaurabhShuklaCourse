// Write functions using function overloading to add two numbers having different data
// types
#include<iostream>
using namespace std;
int addNum(int , int);
float addNum(float , int );
float addNum(int , float );
float addNum(float , float );
int main()
{
    int a = 5 , b = 4;
    float c = 4.5 , d = 1.2;
    cout<< addNum(a,b)<<endl;
    cout<< addNum(a,c) << endl;
    cout << addNum(c,d) << endl;
    cout << addNum(d,b) << endl;
    return 0;
}
int addNum(int a , int b)
{
    return a + b;
}
float addNum(float a , int b)
{
    return  a + b;
}
float addNum(int a , float b)
{
    return a + b;
}
float addNum(float a , float b)
{
    return  a + b;
}