// Create a complex class and overload assignment operator for that class.
#include<iostream>
using namespace std;

class Complex{
    private:
        int real , img;

    public:
        Complex(){}
        Complex(int r,int i){
            real = r;
            img = i;
        }

        // functions
        void setData(int r , int i){
            real = r;
            img =i;
        }

        // << operator overloading.
        friend ostream& operator<<(ostream&,Complex);

        // = operator overloading.
        
        // c1 = c2 = c3 -> here value of the c3 is assigned to the c1 and c2.
        // first c2 = c3 will be solved so it must return Complex no.
        // no need to make it friend.
        Complex& operator=(Complex &c2){    // not using the reference will lead to unexpected result.
            real = c2.real;
            img = c2.img;

            return c2;
        }
};

ostream& operator<<(ostream &os , Complex c){
    cout << c.real << " + (" << c.img << ")i" << endl ; 
    return cout;
}

int main()
{
    Complex c1(12,3) ,c2 , c3(56,-4) , c4;

    cout << c1 << c2 << c3 << c4;

    c2 = c4 = c1;

    cout << "CHANGES -" << endl;
    cout << c1 << c2 << c3 << c4;

     


    return 0;
}