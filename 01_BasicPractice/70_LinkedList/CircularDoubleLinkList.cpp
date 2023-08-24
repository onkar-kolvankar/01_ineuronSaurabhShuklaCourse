#include <iostream>

using namespace std;

class mNode{
    public:
        int data;
        mNode *prev;
        mNode *next;

        mNode()
        {
            data = 0;
            prev = NULL;
            next = NULL;
        }

};

class CDLL{
    public:
        mNode *head;

        CDLL(){
            head = NULL;
        }

        void insertFirstNode(int x)
        {
            mNode *newNode = new mNode();
            newNode -> data = x;

            head = newNode;
            newNode -> next = newNode;
            newNode -> prev = newNode;
        }

        void insertAtStart(int v)
        {
            mNode *newNode = new mNode();
            newNode -> data = v;
            if(head == NULL)
            {
                // no element is present so add 1st noode
                insertFirstNode(v);                

            }
            else{
                newNode -> next = head ;
                newNode -> prev = head -> prev;
                head-> prev = newNode;
                newNode -> prev -> next = newNode;
                head = newNode;
                //  cout << "inside else" << endl;

            }
        }

        void insertAtEnd(int v)
        {
            mNode *newNode = new mNode();
            newNode -> data = v;
            if(head == NULL)
            {
                // no element is present so add 1st noode
                insertFirstNode(v);
            }
            else{
                newNode -> next = head ;
                newNode -> prev = head -> prev;
                head -> prev -> next = newNode;
                head -> prev = newNode;

            }
        }

        void insert(int v , int pos)
        {
            if(head == NULL)
            {
                if(pos == 1)
                {
                    insertAtStart(v);
                }
                else{
                    cout << "Please enter the valid position . CDLL is empty" << endl; 
                }
            }
            else{
                mNode *t = head;
                int x = pos;

                if(pos == 1)
                {
                    insertAtStart(v);
                    return ;
                }
                
                // traversing to find the pos where you want to insert new node
                while(x > 1 && t -> next != head)
                {
                    t = t-> next;
                    x--;
                }

                if(x == 2)
                {
                    // you want to insert at the end
                    insertAtEnd(v);
                }
                else if(x == 1)
                {
                    // you are at the correct position
                    mNode *newNode = new mNode();
                    newNode -> data = v;
                    newNode -> prev =  t -> prev;
                    newNode -> next = t;
                    t -> prev = newNode;
                    newNode -> prev -> next = newNode;
                }
                else{
                    cout << "Please enter the correct postion" << endl;
                }
            }

        }

        void deleteAtStart()
        {
            mNode *delNode;
            if(head == NULL)
            {
                cout << "The ll is alredy empty" << endl;
            }
            else{
                if(head -> next == head){
                    // only 1 elmt in the ll
                    delNode = head;
                    head = NULL;
                    delete delNode;
                }
                else{
                    delNode = head;
                    delNode -> next -> prev = delNode -> prev;
                    head = delNode -> next;
                    delNode -> prev -> next = delNode -> next;
                    delete delNode;
                }
            }
        }

        void deleteAtEnd()
        {
            mNode *delNode;
            if(head == NULL)
            {
                cout << "The ll is alredy empty" << endl;
            }
            else{
                if(head -> next == head){
                    // only 1 elmt in the ll
                    delNode = head;
                    head = NULL;
                    
                }
                else{
                    delNode = head -> prev;
                    delNode -> prev -> next = head;
                    head -> prev = delNode -> prev;
                    
                }
                delete delNode;
            }
        }

        void deleteNode(int pos)
        {
            if(head == NULL)
            {
                cout << "ll is empty" << endl;
            }
            else{
                if(pos == 1)
                {
                    deleteAtStart();
                }
                else{
                    int x= pos;
                    mNode *delNode = head;
                    while( x > 1 && delNode -> next != head)
                    {
                        delNode = delNode -> next;
                        x--;
                    }
                    // cout << "out of while loop deleting node = " << delNode -> data <<endl;
                    
                    if(x==1){
                        // there is node at that pos
                        if(delNode -> next == head){
                            // last node
                            deleteAtEnd();
                        }
                        else{
                            // cout << "inside x== 1 when there is next node." << endl;
                            delNode -> prev -> next = delNode -> next;
                            delNode -> next -> prev = delNode -> prev;
                            delete delNode;
                        }
 
                    }
                    else{
                        cout << "Please enter correct position." << endl;
                    }
                }
            }
        }

        void printAll()
        {
            // cout << "code in print" << endl;
            mNode *t = head;
            if(head == NULL)
            {
                cout << "The list is empty." << endl;
                return;
            }
            while(t -> next != head)
            {
                cout << t->data << " <=> " ;
                t = t-> next;

            }
            cout << t->data << " <=> " ;
            cout << endl;
        }


};

int main()
{
    CDLL l;
    l.insert(10,1);
    l.insert(20,2);
    l.insert(30,3);
    l.insert(40,4);
    l.printAll();
    l.deleteNode(5);
    l.printAll();


    return 0;
}