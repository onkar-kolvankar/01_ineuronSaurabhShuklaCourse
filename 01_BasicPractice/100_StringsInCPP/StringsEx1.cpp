#include <iostream>
#include <string>
using namespace std;

// string is actually a character array
// - it provides the dynamic size allocation.
// - hence you can reassign strings or append / erase in the same variable.

int main()
{
    string name = "Onkar kolvankar";
    cout << name << endl;

    cout << "Enter your full name ." << endl;
    getline(cin, name);
    cout << name << endl;

    // get the length / size of the string.
    cout << "string length = " << name.size() << endl;
    cout << "string length = " << name.length() << endl; 

    // 2] to erase stored string and make it empty string i.e ""
    name.clear();
    cout << name << endl;

    // 3] to find if the string is empty : returns empty => 1 , Not empty => 0
    cout <<"string is empty or not = " << name.empty() << endl;
    name = "hello";
    cout <<"string is empty or not = " << name.empty() << endl;

    // 4] accessing chars in strings using [] operator
    cout << name[0] << " " << name[name.size() - 1] << endl;    // index starts from 0 to len-1

    // 5] accessing chars using at();
    cout << "Accessing chars using at(index) - " << name.at(2) << endl;

    // 6] accessing the last char in string - back()
    cout << "Accessing the last char in string - .back() : " << name.back() << endl;

    // 7] accessing the 1st char in string - front()
    cout << "Accessing the 1st char in string - .front() : " << name.front() << endl;

    // MODIFIERS

    // 1] To append a string to string += 
    name += " there";
    cout <<"After adding new string using += : " <<  name << endl;
    
    // 2] To append a string to string using - .append(string)
    name.append(" ! how are you?");
    cout <<"After adding new string using .append(string) : " << name << endl;

    // 3] PUSH_BACK -Add a char at the end of string - .push_back(char c)
    name.push_back('a');
    cout << "After adding char at the end using .push_back(char c) : " << name << endl;

    // 4] POP_BACK - Delete last char - .pop_back()
    name.pop_back();
    cout << "After deleting char at end using .pop_back() : " << name << endl;

    // 5] ASSIGN -To assign content to string - .assign(source_str,start_index,end_index)
    // NOTE - If there is something stored in it then it will delete it then assign new string.
    string source_str = "Let us do now learn something." ;
    name.assign(source_str,2,10);
    cout << "After assignin other string to name string - .assign(source_str,start_index,end_index) : " << name << endl;

    // 6] INSERT a string in string - .insert(int insertBeforeIndex , String sourceString , int sourceString_start,int sourceString_len ) 
    name.clear();
    name.assign("My name is Onkar.");
    name.insert(8,source_str,10);
    cout << "INSERT - " << name << endl;

    // 7] ERASE to erase substring from string - .erase(start_pos,len)
    name.erase(4,10);
    cout << "ERASE - "<< name << endl;

    // 8] REPLACE 
    name.clear();
    name = "onkar kolvankar";
    string s1 = "my name rajesh kolvankar";
    name.replace(6,2,s1,8,6);
    cout << "REPLACE - " << name << endl;

    // 9] SWAP - .swap(str2)
    name.clear();
    name = "onkar";
    string lastname = "kolvankar";
    name.swap(lastname);
    cout << "SWAP - name = " << name << " lastname = " << lastname << endl; 




    




    return 0;
}