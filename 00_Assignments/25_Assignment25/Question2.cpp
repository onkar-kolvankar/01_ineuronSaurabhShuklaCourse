// Define a class Time to represent Time (like 3 hr 45 min 20 sec). Declare appropriate
// number of instance member variables and also define instance member functions to
// set values for time and display values of time
#include<iostream>
using namespace std;

class MyTime
{
    private:
        int hrs , min , sec;

    public:
        int setTime(int hour,int minute,int second)
        {
            if(hour > 24 || minute > 60 || second > 60)
            {
                
                return 0;
            }
            else
            {
                hrs = hour;
                min = minute;
                sec = second;
                return 1;
            }
            
        }

        void displayTime()
        {
            cout << endl << hrs <<" hr "<< min <<" min "<< sec <<" sec ";
        }
};

int main()
{
    int hr,min,sec;
    cout << "Enter the Hour , Min , Second :";
    cin >> hr >> min >> sec;

    MyTime m1;
    if(m1.setTime(hr,min,sec)!=1)
    {
        cout<< "\nPlease enter the valid data.";
    }
    else 
    {
        cout << endl << "Successfull  data submission.";
    }

    
    m1.displayTime();

    return 0;
}