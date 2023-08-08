// Create a class CString to represent a string.
// a) Overload the + operator to concatenate two strings.
// b) == to compare 2 strings.

#include<iostream>
#include<cstring>
using namespace std;

class CString{

    private:
        char *a;
        int size;

    public:
        // default constructor
        CString(){
            a = (char *)malloc(1);
            size = 1;
        }   
        CString(const char  *c){                 // parameterized constructor
            size = strlen(a) + 1;
            a = (char *)malloc(size);
            strcpy(a,c);
        } 

        // copy constructor.
        CString(const CString &str){
            // free(a);         // not needed as creating the object 1st time , no mem allocated to a yet.
            size = strlen(str.a) + 1;
            a = (char *)malloc(size);
            strcpy(a,str.a);
        }

        // display function
        void display(){
            cout << a << endl ;
        }

        // overloading + operator
        CString& operator+(CString str)
        {
            CString temp;
            temp.size = size + str.size ; // we do -1 because size already contains +1 for \0 char
            

            
            free(temp.a);
            temp.a = (char *)malloc(temp.size);
            strcpy(temp.a,a);
            strcat(temp.a,str.a);

            return temp;

        }

};

int main()
{
    CString c1("Onkar Kl") , c2("Good Boy");

    CString c3 = c1+c2;

    c3.display();


    return 0;
}