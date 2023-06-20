// Define a class LargestNumber and define an instance member function to find the
// Largest of three Numbers using the class.
// 
#include<iostream>
using namespace std;

class LargestNumber
{
    float a , b, c , largest;
    public:
        void setNums(float x,float y,float z)
        {
            a = x;
            b = y;
            c = z;
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



        void calLargest()       
        {
            if(a >= b && a >= c)
                largest = a;
            else if(b >= a && b >= c)
                largest =  b;
            else 
                largest =  c;
        }
};

int main()
{
    LargestNumber l1;
    int a,b,c;
    cout << "Enter the 3 nos:";
    cin >> a >> b >> c;

    l1.setNums(a,b,c);
    l1.calLargest();

    cout << endl << "Largest no :" << l1.getLargest();


    return 0;
}