// Consider following class Numbers
// class Numbers
// {
// int x,y,z;
// public:
// // methods
// };
// Overload the operator unary minus (-) to negate the numbers

#include<iostream>
using namespace std;

class Numbers{
    int x,y,z;
    
    public:
        // Constructors
        Numbers(){};
        Numbers(int a,int b,int c)
        {
            x = a;
            y = b;
            z = c;
        }

        // member methods
        void setNumbers(int a,int b,int c)
        {
            x = a;
            y = b;
            z = c;
        }

        void displayNumbers(){
            cout << "x = " << x << " y = " << y << " z = " << z << endl;
        }

        // overloading unary minus
        Numbers operator-(){
            x = -x;
            y = -y;
            z = -z;
            return *this;   // don't know why i did this. Came in class lec 40/39 sir will explain.
        }


};

int main()
{

    Numbers n1(2,3,4) , n2 ,  n3(2,-3,-4);
    n1.displayNumbers();
    -n1;
    n1.displayNumbers();
    -n3;
    n3.displayNumbers();

    n2 = -n1;
    n2.displayNumbers();


    return 0;
}