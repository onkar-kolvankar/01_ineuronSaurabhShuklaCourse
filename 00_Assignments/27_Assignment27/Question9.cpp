// Consider the following class mystring
// Class mystring
// {
// char str [100];
// Public:
// // methods
// };
// Overload operator “!” to reverse the case of each alphabet in the string
// (Uppercase to Lowercase and vice versa).

#include<iostream>
#include<cstring>
using namespace std;

class mystring{

    char str[100];
    public:
        mystring(const char *c){
            strcpy(str,c);
        }

        mystring(){}

        void get_string(){
            cout << "Enter the string : ";
            cin.getline(str,100);
        }

        void display()
        {
            cout << str << endl;
        }

        void operator!()
        {
            for(int i = 0; i < strlen(str) ; i++)
            {
                if(str[i]>= 65 && str[i] <= 90){
                    // capiatl letter
                    str[i] = str[i] + 32;
                }
                else if(str[i] >= 90 && str[i] <= 122){
                    // small letter
                    str[i] = str[i] - 32;
                }
            }
        }

};

int main()
{
    mystring m1("Onkar df");

    m1.display();
    !m1;
    m1.display();

    return 0;
}