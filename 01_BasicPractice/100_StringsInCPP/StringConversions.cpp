#include <iostream>
#include <string>

using namespace std;

int main()
{

    // stoi(string,nullptr,base) to convert string to integer
    string name = " 12 145 sdsd";
    string pEnd;
    int roll = stoi(name,nullptr,10);
    cout << roll << endl;

    // cout

    return 0;
}