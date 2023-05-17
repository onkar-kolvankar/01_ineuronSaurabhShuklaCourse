// Define a class ReverseNumber and define an instance member function to find
// Reverse of a Number using class.

#include<iostream>
using namespace std;

class ReverseNumber
{
    public:
        int reverseNo(int num)
        {
            int reverse = 0 , rem;
            while(num)
            {
                rem = num % 10;
                reverse = (reverse * 10) + rem;
                num /= 10;
            }

            return reverse;


        }
};

int main()
{
    ReverseNumber r1;
    int n;
    cout << "Enter a number:";
    cin >> n;
    cout << endl << r1.reverseNo(n);
    return 0;
}