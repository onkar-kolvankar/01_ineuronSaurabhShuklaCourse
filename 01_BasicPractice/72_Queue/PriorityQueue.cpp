#include<iostream>
#define arr_size 5

using namespace std;

class PriorityQueue
{
    public:
        int arr[arr_size];
        int front , end;

        PriorityQueue()
        {
            front = -1;
            end = -1;
        }

        void insert(int v)
        {
            if(front == -1 && end == -1)
            {
                // queue was empty
                arr[++end] = v;
                front++;
            }
            else if(end == arr_size-1)
            {
                cout << "The queue is full can't insert." << endl;
            }
            else{
                // now we need to find the pos where we will insert the elmt

                int insertIndex = end;
                while(arr[insertIndex] > v  && insertIndex >= front){
                    insertIndex--;
                }
                if(insertIndex < front && insertIndex >= 0)
                {
                    // no need to increase the index.

                    // also no ndeed to shift
                    arr[insertIndex] = v;
                    front--;
                }
                else{
                    insertIndex++;  // now we have the corrct position of the new elemt.

                    // now do the shifting.
                    for(int i = end ; i >= insertIndex ; i--)
                    {
                        arr[i+1] = arr[i];
                    } 
                    end++;

                    // now insert the elmt
                    arr[insertIndex] = v;
                }
            }
        }

        void printAll()
        {
            if(front == -1 && end == -1)
            {
                cout << "Priority queue is empty" << endl;
            }
            else{
                for(int j = front ; j <= end ; j++)
                {
                    cout << arr[j] <<  " : " ;
                }
                cout << endl;
            }
        
        }

        void deleteElmt()
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
};

int main()
{

    PriorityQueue pq;
    pq.insert(70);
    pq.printAll();
    pq.insert(20);
    pq.printAll();
        
    pq.insert(10);
    pq.printAll();

    cout << "Deleting now------" << endl;
    pq.deleteElmt();
    pq.printAll();
    
    pq.insert(5);
    pq.printAll();

    pq.insert(20);
    pq.printAll();
    

    return 0;
}