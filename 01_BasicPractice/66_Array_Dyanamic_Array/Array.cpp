#include<iostream>

using namespace std;

class MyArray{
    int arr_size = 100;
    int arr[100];
    int size;

    public:
        MyArray()
        {
            size = -1; 

        }

        int getSize()
        {
            return size + 1;    // becz we have started the size from 0
        }

        void insertAtEnd(int v){
            if(size == arr_size - 1){
                cout << "Array is Full." << endl;
                return;
            }
            else{
                // we can insert in the array.
                arr[++size] = v;

            }
        }

        void insertAtPos(int v , int pos){
            if(pos > size)  // means can't insert.
            {
                cout << "Please enter the correct position. Size of array = " << getSize() << endl; 

            }
            else{
                if((size + 1) < arr_size){
                    // there is atleast 1 empty block in array.
                    for(int i = size ++ ; i >= pos ; i--){
                        arr[i + 1] = arr[i];
                    }
                    arr[pos] = v;
                }
                else{
                    // means the array is full i.e all spaces from 100 blocks are occupied.
                    cout << "Sorry but the array is full." << endl;
                }
            }
        }

        void printAll(){
            for(int i = 0 ; i <= size ; i++)
            {
                cout << arr[i] << " " ;
            }
            cout << endl << "Size = " << getSize() << endl;
        }

        void deletePos(int pos)
        {
            if(pos > size || pos < 0){
                cout << "Please enter the proper index." << endl;
            }
            else{
                for(int i = pos ; i < size ; i++){
                    arr[i] = arr[i+1];
                }
                size--;
            }
        }

        void search(int v){
            int flag = 0; // not found
            for(int i = 0 ; i <= size ; i ++)
            {
                if(arr[i] == v){
                    cout << v << " found with index = " << i << endl;
                    flag = 1;
                    return;
                }         
            }

            if(flag == 0)
            {
                cout << v << " Not found." << endl ; 
            }
        }

        

};



int main()
{

    MyArray m;
    m.insertAtEnd(13);
    m.insertAtEnd(75);
    m.insertAtEnd(15);
    m.insertAtEnd(3);
    m.insertAtEnd(1);
    m.printAll();

    // m.insertAtPos(201,0);
    // m.printAll();

    m.insertAtPos(300,5);
    m.printAll();

    m.deletePos(0);
    m.printAll();

    m.deletePos(4);
    m.printAll();

    m.deletePos(1);
    m.printAll();

    m.search(1);
    m.search(75);
    m.search(23434);
    m.search(3);


    return 0;
}
