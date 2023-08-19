#include<iostream>

using namespace std;

class DA{
    int *arrptr = NULL;
    int capacity;
    int size;

    public:

        DA(){
            arrptr = new int[1];
            capacity = 1;
            size = 0;   // means that its index is (size -1)
        }

        ~DA()
        {
            delete []arrptr;
            capacity = 0;
            size = 0;
        }

        int getSize(){
            return size;
        }
        int getCapacity(){
            return capacity;
        }

        void insertAtEnd(int v){
            if(size >= capacity){
                // then you cannot insert directly. size = 3 capacity = 3 then you need to double the array capacity before inserting
                resize();
            }
            
            arrptr[size++] = v;
        }

        void insertAtPos(int v , int pos){
            if(size >= capacity){
                // then you cannot insert directly. size = 3 capacity = 3 then you need to double the array capacity before inserting
                resize();
            }

            if(pos <= size && pos > 0){
                // then you can add
                for(int i = size -1 ; i >= pos -1 ; i--){
                    arrptr[i+1 ] = arrptr[i];
                }
                size++;
                arrptr[pos -1] = v;
            }
            else{
                cout << "please enter the correct position from 1..n" << endl;
            }
        }

        void deleteAtPos(int pos){
            if(pos <= size && pos > 0){
                // then you can delete
                for(int i = pos - 1 ; i < size ; i++){
                    arrptr[i] = arrptr[i+1];
                }
                size--;
            }
            else{
                cout << "please enter the correct position from 1..n" << endl;
            }
        }

        void resize(){
            capacity = capacity * 2;
            int *temp = new int[capacity];
            // now copy data to new array
            for(int i = 0 ; i <= size ; i++){
                temp[i] = arrptr[i];

            }

            // now delete the old pointer
            int *t = arrptr;
            arrptr = temp;
            delete t;
            
        }

        void printAll(){
            for(int i = 0 ; i < size ; i++)
            {
                cout << arrptr[i] << " ";
            }
            cout << endl << "Size = " << getSize() << " Capacity = " << getCapacity() << endl;

        }
};


int main()
{
    DA a;
    a.insertAtEnd(1);
    a.insertAtEnd(2);
    a.insertAtEnd(3);
    a.insertAtEnd(4);
    a.insertAtEnd(5);
    a.insertAtEnd(6);
    a.printAll();

    a.insertAtPos(20,8);
    a.printAll();

    a.deleteAtPos(4);
    a.printAll();
    // a.insertAtPos(15,16);
    // a.printAll();
    


    
    return 0;
}