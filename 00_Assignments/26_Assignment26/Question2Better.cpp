// Define a class Time to represent a time with instance variables h,m and s to store
// hour, minute and second. Also define following member functions
// a. void setTime(int,int,int)
// b. void showTime()
// c. void normalize()
// d. Time add(Time)

// 14:100:70

#include<iostream>
using namespace std;

class Time{
    int h , m , s;

    public:
        void setTime(int x , int y , int z)
        {
            h = x;
            m = y;
            s = z;
            normalize();
        }
        void showTime()
        {
            cout << h << ":" << m << ":" << s << endl;
        } 
        void normalize()
        {
            m = m + s / 60;
            s = s % 60;
            h = h + m / 60;
            m = m % 60;
        }
        Time add(Time t )
        {
            Time temp;
            temp.h = h + t.h;
            temp.m = m + t.m;
            temp.s = s + t.s;
            temp.normalize();
            return temp;
        }
};

int main()
{
    Time t1,t2,t3;

    t1.setTime(75,345,120);
    t1.showTime();
 
    t2.setTime(1,29,698);
    t2.showTime();

    t3 = t1.add(t2);
    t3.showTime();

    
    return 0;
}