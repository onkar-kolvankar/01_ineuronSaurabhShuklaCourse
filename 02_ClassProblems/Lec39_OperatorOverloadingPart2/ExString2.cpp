// Here we create the COPY CONSTRUCTOR.
#include<iostream>
#include<cstring>

using namespace std;

// let's create the MyString class
class MyString{

    private:
        char *a ;   // we create a pointer variable of datatype char
        int size;   // this is the length of MyString.

    public:
        MyString(){
            a = (char*)malloc(sizeof(char));    // assign a memory of size 1 to a
            size = 1;                           // set the size of the MyString to 1

        }

        // make parameturized constructor 
        MyString(const char *str){
            free(a);    // we free the memory of a
            size = strlen(str) + 1;     // here we add 1 to store the null character
            a = (char*)malloc(size);
            strcpy(a,str);
        }

        // copy constructor
        MyString(const MyString &s)
        {
            //free(a);                  // no need to free a in copy constructor as the obj is created
                                        // for 1st time and also getting initialized.
            size = strlen(s.a) + 1;
            a = (char *)malloc(size);
            strcpy(a,s.a);

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
    MyString s1("Onkar K");
    s1.display();
    MyString s2 = s1;   

    MyString s3;
    s3 = s1;                        // Here Assignment operator is called which does shallow copy.       
    

    
    cout << "Strign s1 = ";
    s1.display();
    cout << "Strign s2 = ";
    s2.display();
    cout << "Strign s3 = ";
    s3.display();

    s1.alterString("Lamborgini merchialago");

    cout << "Strign s1 = ";
    s1.display();
    cout << "Strign s2 = ";
    s2.display();
    cout << "Strign s3 = ";
    s3.display();



    return 0;
}