// Define a function to calculate x raised to the power y
#include<iostream>
using namespace std;
int getPow(int , int);
int main()
{
    int x,y;
    cout<<"Enter the num and its power:";
    cin >> x >> y;
    
    cout<<x<<" to the power "<<y<<" = "<<getPow(x,y);

    return 0;
}
int getPow(int x,int y)
{
    if(y == 0)  
        return 1;
    
    return x * getPow(x,y-1);
}