// Create a Distance class having 2 instance variable feet and inches. Also create
// default constructor and parameterized constructor takes 2 variables . Now overload ()
// function call operator that takes 3 arguments a , b and c and set feet = a + c + 5 and
// inches = a+b + 15
#include<iostream>
using namespace std;

class Distance{
    int feet , inches;

    public:
        Distance(){}
        Distance(int f , int i){
            feet = f;
            inches = i;
        }

        // overloading the << operator
        friend ostream& operator<<(ostream& , Distance&);

        // overloading the () operator.
        // we need to have 3 arguments if we make it instance member operator overloading.
        void operator()(int a , int b , int c){
            feet = a + c + 5;
            inches = a + b + 15;
        }

};

ostream& operator<<(ostream &os , Distance &d){
    cout << "Feet = " << d.feet << " Inches = " << d.inches << endl ;
    return os;
}

int main()
{
    Distance d1(3,10);
    cout << d1;
    d1(1,2,3);
    cout << d1;
    return 0;
}