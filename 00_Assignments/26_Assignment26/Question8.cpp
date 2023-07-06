// 8. Define a class Bank and define member functions to read principal , rate of interest
// and year. Another member functions to calculate simple interest and display it.
// Initialise all details using constructor

// A  = final amt , A = P(1 + rt)
// S.I =(P * R * T) / 100    ,, where R is in percentage

#include<iostream>
using namespace std;

class Bank{
    float principal , roi , year , si , A;          

    public:
        Bank(){}

        Bank(float p , float r , float y )
        {
            principal = p;
            roi = r;
            year = y;
        }

        void setDetails(float p , float r , float y )
        {
            principal = p;
            roi = r;
            year = y;
        }

        float getPricipal()
        {
            return principal;
        }
        float getRoi()
        {
            return roi;
        }
        float getYear()
        {
            return year;
        }

        void calSI()
        {
            si = (principal * roi * year) / 100;
        }
        float getSI()
        {
            return si;
        }


};

int main()
{
    Bank b1(10000,10.5,5);
    b1.calSI();
    cout << "For Pricipal = " << b1.getPricipal() << " Roi = " << b1.getRoi() << " year = " << b1.getYear() << " SI = " << b1.getSI();
    return 0;
}