// Create a class CString to represent a string.
// a) Overload the + operator to concatenate two strings.
// b) == to compare 2 strings.

// Sir solution uses the array of char . It does not uses the Pointer of char and dynamic mem allocation.

#include<iostream>
#include<cstring>

using namespace std;

class CString{

    char str[500];

    public:
        CString(const char *s){
            strcpy(str,s);
        }

        CString(){}


        void getString(){
            cout << "Enter the String : ";
            cin.getline(str,500);


        }

        void display(){
            cout << str << endl ;
        }

        CString operator+(CString c2){
            CString temp;
            strcpy(temp.str,str);
            strcat(temp.str,c2.str);

            return temp;
        }

        bool operator==(CString c2)
        {
            int r = strcmp(str,c2.str);
            if(r == 0)
                return true;
            else
                return false;
        }



};


int main()
{
    CString c2("Onar dfd") ,c1;
    
    c1.getString();
    c1.display();
    c2.display();

    CString c3;
    c3 = c1 + c2;
    c3.display();

    if(c1 == c2)
    {
        cout << "c1 is equal to c2";
    }
    else
    {
        cout << "c1 is NOT equal to c2";
    }


    return 0;
}