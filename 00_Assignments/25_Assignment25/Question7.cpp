// Define a class Greatest and define instance member function to find Largest among
// 3 numbers using classes.

#include<iostream>
using namespace std;

class Greatest
{
    float a , b , c ,largest;
    public:
        void setNos(float l , float m , float n)
        {
            a = l;
            b = m;
            c = n;
        }
        float getNum1()
        {
            return a;
        }
        float getNum2()
        {
            return b;
        }
        float getNum3()
        {
            return c;
        }
        float getLargest()
        {
            return largest;
        }
        void getGreatest()
        {
            if(a >= b && a >= c)
                largest = a;
            else if(b >= a && b >= c)
                largest = b;
            else 
                largest = c;
        }
};

int main()
{
    Greatest g1;
    g1.setNos(1043,43,478);
    g1.getGreatest();
    cout << endl << "Greatest no = " <<g1.getLargest();
    return 0;
}