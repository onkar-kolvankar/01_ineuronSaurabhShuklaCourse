#include <iostream>
#include <string>
#include <cstring>

using namespace std;
// string operations

int main()
{
    // 1] c_str() - returns pointer pointing to the char array of the string
    // you need to make a pointer char of array
    // Now you need cstring lib to use strcmp()
    string name = "Onkar Kolvankar dfKolvankar";
    char * temp =  new char[name.length()+1]; // =1 because we need to store \0 char also

    strcpy(temp,name.c_str());
    // temp[name.length()] = '\0';
    cout << "c_str() to make string into char array : " << temp << endl;

    // 2] FIND() - to find a substring in string
    //      - position of the 1st char of 1st match
    //
    // str.find(str2) , str.find('char')
    int found;
    found = name.find("Kol");
    cout << "FIND() - pos of Kol = " << found << endl;
    

    //3] rfind() - 
    found = name.rfind("Kol");
    cout << "FIND() - pos of Kol = " << found << endl;

    // 4] find_first_of() - to find character in string and its first occurence
    found = name.find_first_of('d');
   cout << "find_first_of() - pos of av = " << found << endl;

    // 5] substr() - used to get substring of a string
    string sirname = name.substr(name.find("Kolvankar"),9);
    cout << "substr() - " << sirname << endl;

    // 6] compare() - returns 0 if strings are equal
    if(sirname.compare(name)==0)
        cout << "sirname and name is same " << endl;
    else 
        cout << "sirname and name NOT SAME" << endl;

    return 0;
}