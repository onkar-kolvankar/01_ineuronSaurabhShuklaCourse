// Create an Integer class and overload logical not operator for that class.

// MA1 - so we will overload ! operator to change the sign of the variable.

#include<iostream>
using namespace std;

class Integer{
    int num ;

    public:
        Integer(){};
        Integer(int n){
            num = n;
        }

        // function.
        void setData(int n)
        {
            num = n;
        }
        // << operator overloading.
        friend ostream& operator<< (ostream& , Integer&);

        // >> operator overloading to take input.
        friend istream& operator>>(istream&,Integer&);

        // ! operator overloading.
        // because it is unary operator we don't need to pass argument.
        // return -> !a should change the sign of the original variable. so i guess void return type.
        Integer& operator!(){
            num = num * (-1);
            return *this;
        }
};

ostream& operator<<(ostream &os , Integer &i)
{
    cout << i.num << endl;
    return cout;
}

istream& operator>>(istream &os, Integer &i)
{
    cin >> i.num ;
    return cin;
}



int main()
{
    // THEORY - ! operator returns true(1) if variable has value 0 , and false(0) when it is non zero

    // int a = -87 , b = 23 , c = 0  ;
    
    // cout << !a << endl;         // op = 0
    // cout << !b << endl;         // op = 0
    // cout << !c << endl;         // op = 1
    
    Integer i1;

    cin >> i1;

    cout << i1;

    cout << !i1;



    return 0;
}