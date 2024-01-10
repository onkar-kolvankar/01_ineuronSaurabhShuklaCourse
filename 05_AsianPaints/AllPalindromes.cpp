#include<iostream>
#include<string>

using namespace std;


int main()
{
    string userInput;

    cout << "Enter the string :" ;
    getline(cin,userInput);

    cout << userInput;


    return 0;
}

bool isPalindrome(string tempString)
{
    string::iterator startIterator,endIterator;
    startIterator = tempString.begin();
    endIterator = tempString.end();

    bool flag = true;

    while(*startIterator == *endIterator)
    {
        
    }



}