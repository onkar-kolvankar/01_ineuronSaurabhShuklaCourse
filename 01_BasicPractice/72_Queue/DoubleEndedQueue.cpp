#include<iostream>

#define arr_size 100

using namespace std;

class DoubleEndedQueue{

    int arr[arr_size];
    int front,end;

    public:
        DoubleEndedQueue(){
            front = -1;
            end = -1;
        }

        void insertFromBack(int v){
            if(front == -1 && end == -1)
            {
                // inesrting the 1st elmt
                arr[++end] = v;
                front ++;
            }
            else{
                arr[++end] = v;
            }
        }

        void insertFromFront(int v){
            if(front == -1 && end == -1)
            {
                // inesrting the 1st elmt
                arr[++front] = v;
                end ++;
            }
            else if(end == arr_size -1){
                // array is full
                cout << "Can't insert queue full." << endl;
            }
            else{
                // noew we can insert the elmt from the front
                // Shift the elemnt to accomodate
                for(int i = end ; i >= front ; i--)
                {
                    arr[i+1] = arr[i];
                }
                // now add the elt to the front
                arr[front] = v;
                end++;
            }
        }

        void deleteFromFront()
        {
            if(front == -1 && end == -1)
            {
                cout << "the queue is empty" << endl;
            }
            else if(front == end)
            {
                // only 1 elemt is rem so set front and end to original pos
                cout << "Deleting the elmt " << arr[front] << endl;
                front = end = -1;
            }
            else{
                cout << "Deleting the elmt " << arr[front] << endl;
                front++;
            }

        }
        void deleteFromBack()
        {
            if(front == -1 && end == -1)
            {
               cout << "the queue is empty" << endl; 
            }
            else if(front == end)
            {
                // only 1 elemt is rem so set front and end to original pos
                cout << "Deleting the elmt " << arr[end] << endl;
                front = end = -1;
            }
            else{
                cout << "Deleting the elmt " << arr[end] << endl;
                end--;
            }
        }

        void printAll(){
            if(front == -1 && end == -1)
            {
                cout << "The Queue is empty" << endl;

            }
            else{
                for(int i = front ; i <= end ; i++)
                {
                    cout << arr[i] << " <- " ;
                }
                cout << endl;
            }
        }


};

int main()
{
    DoubleEndedQueue dq;
    dq.insertFromBack(1);
    dq.printAll();
    dq.insertFromFront(2);
    dq.printAll();
    dq.insertFromBack(3);
    dq.printAll();
    dq.deleteFromFront();
    dq.printAll();
    dq.deleteFromBack();
    dq.printAll();
    dq.deleteFromFront();
    dq.printAll();
    dq.deleteFromBack();
    dq.printAll();


    return 0;
}