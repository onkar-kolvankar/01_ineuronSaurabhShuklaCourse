// Create a class Time which contains:
// - Hours
// - Minutes
// - Seconds
// Write a C++ program using operator overloading for the following:
// 1. = = : To check whether two Times are the same or not.
// 2. >> : To accept the time.
// 3. << : To display the time.

#include<iostream>
using namespace std;

class Time{
    int h,m,s;

    public:
        // Constructors
        Time(){};
        Time(int x , int y , int z){
            h = x;
            m = y;
            s = z;
            normalize();
        }

        // Member functions;
        void setTime(int x , int y , int z){
            h = x ;
            m = y;
            s = z;
            normalize();
        }

        void displayTime(){
            cout << h << ":" << m << ":" << s << endl;
        }

        void normalize(){
            m = m + s/60;
            s = s % 60;
            h = h + m/60;
            m = m % 60;
        }

        // operator overloading.
        bool operator==(Time t2){
            int sec1,sec2;
            sec1 = (h * 3600) + (m * 60) + s;
            sec2 = (t2.h * 60 * 60) + (t2.m * 60) + t2.s;
            return (sec1 == sec2) ? true : false ;
        }

        // you need to make it friend function since you don't have access of ostream class
        // also you need to return the reference of ostream object.
        // when you return don't return cout as it is object of ostream.
        // instead return os which is the reference of cout.
        friend ostream& operator<<(ostream &,Time);

        friend istream& operator>>(istream &,Time &);

};

ostream& operator<<(ostream &os , Time t){
    os << t.h << ":" << t.m << ":" << t.s << endl; 
    return os;
}

istream& operator>>(istream &os,Time &t){
    // cout<< "Enter the Hours :";
    // cin >> t.h;
    // cout << "Enter the Minutes :";
    // cin >> t.m;
    // cout << "Enter the Seconds :";
    // cin >> t.s;

    int x , y , z;
    cout<< "Enter the Hours :";
    cin >> x;
    cout << "Enter the Minutes :";
    cin >> y;
    cout << "Enter the Seconds :";
    cin >> z;

    t.setTime(x,y,z);
    
    return os;
}

int main()
{
    Time t1(128,72,94) , t2(34,4,1) , t3(129,13,34) ,t4;

    if(t1 == t2)
        cout << "t1 IS EQUAL TO t2" << endl;
    else
        cout << "t1 IS NOT EQUAL TO t2" << endl;

    if(t3 == t1)
        cout << "t3 IS EQUAL TO t1" << endl;
    else
        cout << "t3 IS NOT EQUAL TO t1" << endl;

    //t1.displayTime();

    cout<< t1 << t2 << t3;

    cout << "Taking the Time Inputs -" << endl;
    cout << t4;
    cin >> t4;
    cout << t4;




    return 0;
}