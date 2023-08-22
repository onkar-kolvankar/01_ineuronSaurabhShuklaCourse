// Circular SLL - 
// Here changes will only be in inserAtBegin() , insertAtEnd() , deleteAtBegin() , deleteAtEnd()
#include <iostream>

using namespace std;

class mNode{
    public:
        int data;
        mNode *next;

        mNode(){
            data = 0;
            next = NULL;
        }

};

class CircularSLL{
    mNode *head;

    public:
        CircularSLL(){
            head = NULL;

        }

        void insertAtEnd(int v)
        {
            mNode *newNode = new mNode();
            newNode -> data = v;
            mNode *t = head;
            if(head == NULL)
            {
                head = newNode;
                newNode -> next = newNode;
            }
            else{
                while(t-> next != head)
                {
                    t = t-> next;
                }
                newNode -> next = t -> next;
                t -> next = newNode;
            }
        }


        void insertAtBegin(int v)
        {
            mNode *newNode = new mNode();
            newNode -> data = v;

            if(head == NULL)
            {
                head = newNode;
                newNode -> next = newNode;    
            }
            else{
                mNode *lastNode = head;
                while (lastNode -> next != head)
                {
                    lastNode = lastNode -> next;
                }
                newNode -> next = head;
                head = newNode;
                lastNode -> next = newNode;
                 
            }
        }

        void insertAtMiddle(int v,int pos)
        {
            if(pos == 0)
            {
                // insert at begin.
                insertAtBegin(v);
            }
            else{
                if(head == NULL)
                {
                    cout << "Please enter the correcty position." << endl;
                }
                else{
                    mNode *newNode = new mNode();
                    newNode -> data = v;

                    // traverse till you get to the prev node 
                    int x = pos;
                    mNode *t = head;
                    while(x>1 && t ->next != head )
                    {
                        t = t-> next;
                        x--;
                    }

                    if(t -> next == head && x != 1) // the ll ended before - pos is wrong
                    {
                        cout << "Please enter the correct position." << endl;
                        //return;
                    }
                    else if(t -> next == head && x == 1){
                        // t -> next == head and x == 1 means you are trying to insert at end.
                        insertAtEnd(v);
                    }
                    else{
                        // means you are inserting at the middle.
                        newNode -> next = t -> next;
                        t -> next = newNode;
                    }
                }
            }
        }

        void deleteAtBegin()
        {
            if(head == NULL)
            {
                cout << "LL is already empty" << endl;
            }
            else{
                mNode *lastNode = head;
                mNode *delNode = head;
                while(lastNode -> next != head)
                {
                    lastNode = lastNode -> next;
                }
                if(lastNode == delNode){
                    // there is only 1 node in ll
                    head = NULL;
                    delete delNode;
                }
                else{
                    head = delNode -> next;
                    lastNode -> next = delNode -> next;
                    delete delNode;
                }

            }
        }

        void deleteAtEnd()
        {
            if(head == NULL)
            {
                cout << "ll is empty so can't delte at end " << endl;

            }
            else if(head -> next == head)
            {
                // only 1 ndoe is present
                mNode *delNode = head;
                head = NULL;
                delete delNode;
            }
            else{
                mNode *secondLastNode = head;
                mNode *delNode;

                while(secondLastNode -> next -> next != head)
                {
                    secondLastNode = secondLastNode -> next;
                }
                delNode = secondLastNode -> next;
                secondLastNode -> next = head;
                delete delNode;
            }
        }

        void deleteAtMiddle(int pos){
            if(head == NULL)
            {
                cout << "The ll is empty" << endl;
            }
            else if(head -> next == NULL)
            {
                // only one node
                if(pos == 1){
                    deleteAtBegin();
                }
                else{
                    cout << "Please enter correct position." << endl;
                }
            }
            else{
                mNode *prevDelNode = head;
                int x = pos;
                if(pos == 1)
                {
                    deleteAtBegin();
                    return ;
                }
                if(pos == 0)
                {
                    cout << "Enter correct position. " << endl;
                    return;
                }
                while(x > 2 && prevDelNode -> next != head)
                {
                    prevDelNode = prevDelNode -> next;
                    x--;
                }
                if(prevDelNode -> next == head)
                {
                    cout << "Please enter correct position." << endl;
                }
                else{
                    mNode *delNode = prevDelNode -> next;
                    prevDelNode -> next = delNode -> next;
                    delete delNode;
                }
                

            }
        }

        void printAll(){
            mNode *t = head;
            if(head == NULL)
            {
                cout << "List is empty" << endl;
            }
            else{
                while(t -> next != head)
                {
                    cout << t -> data << " -> " ;
                    t = t->next;
                }
                cout << t -> data << " -> " ;
                cout << endl;
            }
        }



};


int main()
{
    
    CircularSLL cll;
    // cll.printAll();
    // cll.deleteAtBegin();
    cll.insertAtEnd(10);
    // cll.printAll();
    // cll.deleteAtBegin();
    // cll.printAll();
    
    cll.insertAtEnd(20);
    cll.insertAtEnd(30);
    cll.insertAtBegin(40);
    cll.insertAtBegin(50);
    // cll.insertAtMiddle(200,6);
    cll.printAll();

    cll.deleteAtBegin();
    cll.printAll();
    cll.deleteAtEnd();
    cll.printAll();
    cll.deleteAtMiddle(0);
    cll.printAll();
    


    return 0;
}