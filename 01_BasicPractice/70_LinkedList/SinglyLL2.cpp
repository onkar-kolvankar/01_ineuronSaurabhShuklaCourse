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


class LL2{

    mNode *head;
    public:
        LL2(){
            head = NULL;
        }

        void insertAtEnd(int v)
        {
            mNode *newNode = new mNode();
            newNode->data = v;
            if(head == NULL)
            {
                // means the ll is empty.
                head = newNode;
                
            }
            else{
                // when there are other nodes 
                // 1. travrese the ll to reach the last node.
                mNode *t = head;
                while(t->next != NULL)
                {
                    t = t->next;
                } 
                // now insert newNode here.
                t->next = newNode;
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
                    while(x>1 && t!= NULL)
                    {
                        t = t-> next;
                        x--;
                    }

                    if(t == NULL)
                    {
                        cout << "Please enter the correct position." << endl;
                        //return;
                    }
                    else{
                        newNode -> next = t -> next;
                        t -> next = newNode;
                    }
                }
            }
        }

        void insertAtBegin(int v){
            mNode *newNode = new mNode();
            newNode -> data = v;

            if(head == NULL)
            {
                head = newNode;
            }
            else{
                mNode *temp = head;
                head = newNode;
                newNode -> next = temp;
            }
        }

        void deleteAtBegin(){
            mNode *delNode = head;
            if(head -> next == NULL)
            {
                delete delNode;
                head = NULL;
            }
            else{
                head = head -> next;
                delete delNode;
            }
            
        }

        void deleteAtEnd(){
           
            if(head == NULL)
            {
                cout << "The ll is empty." << endl;
            }
            else if(head -> next == NULL){
                mNode *t = head;
                head = NULL;
                delete t;
            }
            else{
                mNode *secondlastNode = head;
                while(secondlastNode -> next -> next != NULL)
                {
                    secondlastNode = secondlastNode -> next;
                } 
                mNode *delNode = secondlastNode -> next;
                secondlastNode -> next = NULL;
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
                    mNode *t = head;
                    head = head -> next;
                    delete t;
                    return ;
                }
                while(x > 2 && prevDelNode -> next != NULL)
                {
                    prevDelNode = prevDelNode -> next;
                    x--;
                }
                if(prevDelNode -> next == NULL)
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
                cout << "The LL is empty." << endl;
            }
            else{
                while(t)
                {
                    cout << t-> data << " -> " ;
                    t = t-> next;
                }
                cout << endl;
            }
            
        }

        void searchElmt(int elmt)
        {
            mNode *t = head;
            int pos = 1;
            while(t != NULL)
            {
                if(elmt == t->data)
                {
                    cout << elmt << " is present in the list at POS = " << pos << endl ;
                    return;
                }
                t = t-> next;
                pos++;
                
            }
            cout << elmt << " is not present in the list" << endl ;
        }

};


int main()
{
    LL2 l;
    l.insertAtEnd(10);
    
    l.insertAtEnd(20);
    l.insertAtBegin(50);
    l.insertAtBegin(60);
    
    l.insertAtMiddle(100,100);
    l.insertAtMiddle(200,2);
    
    // l.insertAtMiddle(300,);
    l.printAll();

    l.deleteAtMiddle(1);
    l.printAll();

    l.searchElmt(1000);

    // l.deleteAtBegin();
    // l.printAll();
    // l.deleteAtEnd();
    // l.printAll();

    return 0;
}