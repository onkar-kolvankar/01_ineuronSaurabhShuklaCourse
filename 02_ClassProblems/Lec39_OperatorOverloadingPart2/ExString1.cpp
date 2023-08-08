// displays the Shallow copy performed because we haven't created the COPY CONSTRUCTOR.
#include<iostream>
#include<cstring>

using namespace std;

// let's create the String class
class String{

    private:
        char *a ;   // we create a pointer variable of datatype char
        int size;   // this is the length of string.

    public:
        String(){
            a = (char*)malloc(sizeof(char));    // assign a memory of size 1 to a
            size = 1;                           // set the size of the string to 1

        }

        // make parameturized constructor 
        String(const char *str){
            free(a);    // we free the memory of a
            size = strlen(str) + 1;     // here we add 1 to store the null character
            a = (char*)malloc(size);
            strcpy(a,str);
        }

        void display(){
            
            cout <<a << endl;
        }

        void alterString(const char *str){
            size = strlen(str) + 1;
            free(a);
            a = (char *)malloc(size);
            strcpy(a,str);
        }


};


int main()
{
    String s1("Onkar K");
    String s2 = s1; // let's see the shallow coopy 
    
    s1.display();

    

    cout << "Strign s1 = ";
    s1.display();
    cout << "Strign s2 = ";
    s2.display();

    s1.alterString("Lamborgini merchialago");

    cout << "Strign s1 = ";
    s1.display();
    cout << "Strign s2 = ";
    s2.display();

    return 0;
}