// Consider a class Matrix
// Class Matrix
// {
// int a[3][3];
// Public:
// //methods;
// };
// Overload the - (Unary) should negate the numbers stored in the object.
// Output 

#include<iostream>
using namespace std;

class Matrix{
    int a[3][3] = {0};

    public:
        Matrix(){}

        // overloading
        friend ostream& operator<<(ostream & , Matrix &);

        friend istream& operator>>(istream & , Matrix &);

        // still can't do cout << -m1;
        Matrix operator-()
        {
            for(int i = 0 ; i < 3 ; i++)
            {
                for(int j = 0 ; j < 3 ; j++)
                {
                    a[i][j] = -a[i][j];
                }
            }

            return *this;
        }

        Matrix operator+(Matrix m2)
        {
            Matrix temp;
            for(int i = 0 ; i < 3 ; i++)
            {
                for(int j = 0 ; j < 3 ; j++)
                {
                    temp.a[i][j] = a[i][j] + m2.a[i][j]; 
                }
            }
            return temp;
        }
};

ostream& operator<<(ostream &os,Matrix &m)
{
    for(int i = 0 ; i < 3 ; i++)
    {
        for(int j = 0 ; j < 3 ; j++)
        {
            cout << m.a[i][j] << "    " ;
        }
        cout << endl;
    }

    return os;
}

istream& operator>>(istream &os, Matrix &m)
{
    cout << "Enter the 9 elements of the 3 X 3 matrix :" << endl;
    for(int i = 0 ; i < 3 ; i++)
    {
        for(int j = 0 ; j < 3 ; j++)
        {
            cin >> m.a[i][j];
        }
    }
    return os;
}

int main()
{
    Matrix m1, m2;
    // cout<<m1 << m2;
    cin >> m1 ;
    m2 = m1;    // Assignment operator is working fine when you use default copy constructor
    cout << "m1 = " << endl << m1 << endl << "m2 = " << endl << m2 << endl;

    Matrix m3 = m1; // default copy constructor is also working fine.
    cout << "m3 = " << endl << m3;

    Matrix m4 = -m1;

    
    cout << "-m1 = " << endl << m1;
    cout << "m4 = " << endl << m4;

    Matrix m5 = m4 + m2;
    cout << "m5 = " << endl << m5;


    return 0;
}