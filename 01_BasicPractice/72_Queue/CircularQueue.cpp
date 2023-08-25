#include<iostream>

# define queue_size 5
using namespace std;

class CircularQueue{

    public:

        int arr[queue_size];
        int front , rear;

        CircularQueue()
        {
            front = -1;
            rear = -1;
        }

        void enqueue(int v)
        {
            cout << "In enqueue , front = " << front << " rear = " << rear << endl;
            if(front == -1 && rear == -1)
            {
                // inserting the 1st elemetn
                arr[++front] = v;
                rear++;
            }
            else if( ((rear + 1) % queue_size) == front )
            {
                // means the queue is full.
                cout << "The queue is full" << endl;
            }
            else{
                rear = (rear + 1) % queue_size;
                arr[rear]  = v;

            }
        }
        void dequeue()
        {
            cout << "In dequee , front = " << front << " rear = " << rear << endl;
            if(front == -1 && rear == -1)
            {
                // means the queue is empty
                cout << "The queue is already empty" << endl;
            }
            else if(front == rear){
                // only 1 elemt is there
                cout << "Deleting the : " << arr[front] << endl;
                front = rear = -1;
            }
            else{
                cout << "Deleting the : " << arr[front] << endl;
                front = (front + 1) % queue_size;

            }
        }

        void printAll()
        {
            if(front == -1 && rear == -1)
            {
                cout << "The circular queue is empty" << endl;
            }
            else{
                // cout << " <- ";
                // for(int i = front ; i < rear ;   )
                // {
                //     cout << arr[i] << " : ";
                //     i = (i+1) % queue_size;
                // }
                // cout << arr[rear] << " : " ;
                // cout << " <- " << endl;

                int i = front;
                while(1)
                {
                    cout<< arr[i] << " : ";
                    if(i == rear)
                        break;
                    i = (i+1) % queue_size;
                }
            }


            
        }


};

int main()
{
    CircularQueue cq;
    cq.enqueue(1);
    cq.enqueue(2);
    cq.enqueue(3);
    cq.enqueue(4);
    cq.enqueue(5);
    cq.enqueue(6);
    cq.printAll();

    cq.dequeue();
    cq.printAll();
    cq.dequeue();
    cq.printAll();
    cq.dequeue();
    cq.printAll();

    cq.enqueue(6);
    cq.printAll();

    return 0;
}