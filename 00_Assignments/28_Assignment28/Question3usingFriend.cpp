// Overload subscript operator [] that will be useful when we want to check for an index
// out of bound.

#include<iostream>
using namespace std;

class array{

    private:
        int arr[100];
        const int size = 100;

    public:
        array(){};

        array(int index , int val)
        {
            if(index < 100){
                arr[index] = val;
            }
            else{
                cout << "ERROR : Index out of Bound." << endl;
            }
            
        }

        // functions.
        void setData(int index,int val)
        {
           if(index < 100){
                arr[index] = val;
            }
            else{
                cout << "ERROR : Index out of Bound." << endl;
            } 
        }

        // operator overload.
        friend int operator[](array &,int );
        

};

int operator[](array &a,int index)
        {
            if(index >= a.size)
            {
                cout << "ERROR : Index out of Bound." << endl;
                exit(0);
            }
            else{
                return a.arr[index];
            }

        }

int main()
{

    array a1(4,1000);
    cout << a1[4];

    return 0;
}