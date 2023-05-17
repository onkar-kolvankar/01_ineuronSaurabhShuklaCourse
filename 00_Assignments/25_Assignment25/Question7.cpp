// Define a class Greatest and define instance member function to find Largest among
// 3 numbers using classes.

#include<iostream>
using namespace std;

class Greatest
{
    int a , b , c;
    public:
        void setNos(int l , int m , int n)
        {
            a = l;
            b = m;
            c = n;
        }
        void getNos()
        {
            cout<< a << " " << b << " " << c;
        }
        int getGreatest()
        {
            if(a >= b && a >= c)
                return a;
            else if(b >= a && b >= c)
                return b;
            else 
                return c;
        }
};

int main()
{
    Greatest g1;
    g1.setNos(43,43,43);
    g1.getNos();
    cout << endl << "Greatest no = " <<g1.getGreatest();
    return 0;
}