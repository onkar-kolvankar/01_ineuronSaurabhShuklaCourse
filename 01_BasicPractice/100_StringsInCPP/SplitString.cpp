#include <iostream>
#include <string>
#include <sstream>
using namespace std;


int main()
{
    string line = "12 ,2,3,4;3,4,5,6";
    string sarr[2];
    string temp;

    stringstream Sstream(line);

    // this gives only the first part of splitting string at ;
    getline(Sstream,temp,';');
    cout << temp << endl;

    // so we use the while loop
    int i = 0;
    while(getline(Sstream,temp,';'))
    {
        // cout << temp << endl;
        sarr[i].assign(temp);
        i++;
    }

    for(int i = 0 ; i < 2 ; i++)
    {
        cout << sarr[i] << endl;
    }






    return 0;
}
