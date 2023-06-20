// Define a class ReverseNumber and define an instance member function to find
// Reverse of a Number using class.

#include<iostream>
using namespace std;

class ReverseNumber
{
    int num , reverseNum;
    public:
        void setNum(int x)
        {
            num = x;
        }
        int getNum()
        {
            return num;
        }
        int getReverse()
        {
            return reverseNum;
        }

        void calReverse()
        {
            int reverse = 0 , rem ,tempNum = num;
            while(tempNum)
            {
                rem = tempNum % 10;
                reverse = (reverse * 10) + rem;
                tempNum /= 10;
            }

            reverseNum = reverse;


        }
};

int main()
{
    ReverseNumber r1;
    int n;
    cout << "Enter a number:";
    cin >> n;

    r1.setNum(n);
    r1.calReverse();
    cout << "num = " << r1.getNum() << " reverse = " << r1.getReverse();
    return 0;
}