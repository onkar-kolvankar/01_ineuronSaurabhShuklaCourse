// Define a class Counter and Write a program to Show Counter using Constructor.

#include<iostream>
using namespace std;

class Counter
{
    static int count;

    public:
        // Constructors
        Counter(){
            count++;
        }

        static int getCount()
        {
            return count;
        }
        


};

int Counter :: count;

int main()
{
    Counter c1;
    cout << Counter :: getCount() << endl;

    Counter c2,c3,c4;
    cout << Counter :: getCount() << endl;

    return 0;
}