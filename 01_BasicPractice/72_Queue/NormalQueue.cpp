#include<iostream>

using namespace std;

class QueueNormal{

    int arr[100];
    int front , end ,arr_size = 100;

    public:
        QueueNormal(){
            front = -1;
            end = -1;
        }

        // in normal queue you can inert only from backk;
        void enque(int v){
            if(end == arr_size-1){ // becaus index starts from 0 to arr_size -1
                cout << "Your queue is full" << endl;
                return;
            }
            
            if(front == -1 && end == -1){
                // means this is the 1st element 
                // only time when we move front while insertion.
                arr[++end] = v;
                front++;
            }
            else{
                arr[++end] = v;
            }
        }

        void deque()
        {
            if(front == -1 && end == -1){
                cout << "the queue is empty " << endl;
            }
            else if(front == end)
            {
                // there is only 1 elmt and after deleting it take front and end to -1
                cout << "deleting " << arr[front] << " from the queue" << endl;
                front = end = -1;
            }
            else{
                cout << "deleting " << arr[front] << " from the queue" << endl;
                front++;
            }
        }

        void printAll(){
            if(front == -1 && end == -1){
                
                cout << "the queue is empty" << endl;
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

    QueueNormal q;
    q.enque(10);
    q.enque(20);
    q.enque(30);
    q.enque(40);
    q.printAll();
    q.deque();
    q.deque();
    q.deque();
    q.deque();
    q.printAll();
    return 0;
}