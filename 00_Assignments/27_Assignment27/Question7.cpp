// Define a C++ class fraction
// class fraction
// {
// long numerator;
// long denominator;
// Public:
// fraction (long n=0, long d=0);
// }
// Overload the following operators as member or friend:
// a) Unary ++ (pre and post both)
// b) Overload as friend functions: operators << and >>.

#include<iostream>
using namespace std;

class fraction{
    long numerator , denominator;

    public:
        // constructor.
        fraction(){
            numerator = 0;
            denominator = 0;
        }
        fraction(long x,long y)
        {
            numerator = x;
            denominator = y;
        }

        // member functions.
        void fractionDisplay()
        {
            cout << numerator << "/" << denominator << endl;
        }

        //prefix ++ operator
        fraction operator++()
        {
            fraction temp;
            temp.numerator = ++numerator;
            temp.denominator = ++denominator;
            return temp;
        }

        // postfix ++ operator
        fraction operator++(int dummy_var)
        {
            fraction temp;
            temp.numerator = numerator++;
            temp.denominator = denominator++;
            return temp;
        }


        // overloading
        friend ostream & operator<<(ostream & , fraction);

        friend istream & operator>>(istream &, fraction &);


};

ostream& operator<<(ostream &os,fraction f)
{
    cout << f.numerator << "/" << f.denominator << endl;
    return os;
}

istream& operator>>(istream &os,fraction &f)
{
    cout << "Enter the numerator :" ;
    cin >> f.numerator;
    cout << "Enter the denominator :";
    cin >> f.denominator;

    return os;
}

int main()
{
    fraction f1(5,4) ,f2 , f3;

    cout << f1 << f2;

    cin >> f2;

    cout << f2;

    cout << "f1 = " << f1++;
    cout << "f1 = " << ++f1;

    f3 = f1++;
    cout << "f3 = " << f3 << endl << f1;





    return 0;
}