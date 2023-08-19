#include<iostream>
using namespace std;

class MyNode{

    public:

        int data;
        MyNode *next;

        MyNode(){
            data = 0;
            next = NULL;
        }

        ~MyNode(){
            data = 0;
            delete next;
        }
    };

class SLL{

    MyNode *head;

    public:
        SLL(){
            head = NULL;
        }
        // ~SLL(){
        //     delete head;
        // }

        void insertAtEnd(int v){
            // create new node and store v in it and temp pointing it
            MyNode *temp = new MyNode();
            temp->data = v;

            if(head == NULL){
                // cout << "inside headd == null" << endl;
                head = temp;
                temp = NULL;
            }
            else{
                // cout << "inside headd != null" << endl;
                MyNode *t = head;
                while( t->next != NULL){
                    t = t -> next;
                }

                t-> next = temp;
                temp = NULL;
            }

        }

        void insertAtBegin(int v)
        {
            MyNode *temp = new MyNode();
            temp -> data = v;
            // MyNode *t = head;
            temp -> next = head;
            head = temp;
            temp = NULL;
        }

        void insertInMiddle(int v,int pos){
            int x = v;
            if(pos == 1)
            {
                // insert at begin.
                insertAtBegin(x);
            }
            else{
                int size = 0;
                MyNode *temp = new MyNode();
                temp -> data = v;

                MyNode *t = head;
                
                while(t != NULL)
                {
                    size++;
                    if(size == pos -1)
                    {
                        break;
                    }
                    t = t-> next ;
                }

                if(t == NULL)
                {
                    // invalid position
                    cout << "Please enter valid position." << endl;
                }
                else{
                    temp -> next = t -> next;
                    t-> next = temp;
                }        
            }
        }

        void deleteInLL(int pos)
        {
            MyNode *t = head;
            if(pos == 1){
                // delete 1st node
                cout << "inside pos =1 " << endl;
                head = t -> next;
                //delete t;
            }
            else{
                cout << "inside pos != 1 " << endl;
                int size = 0;
                while(t != NULL)
                {
                    cout << "inside while " << endl;
                    size++;
                    if(size == pos -1)
                    {
                        break;
                    }
                    t = t->next;

                }
                cout << "t node - data = " << t->data << endl;
                if(t == NULL)
                {
                    cout << "Postion does not exist." << endl;
                }
                else{
                    cout << "inside t!= null " << endl;
                    MyNode *del_node = t->next;
                    cout << "del node - data = " << del_node->data << endl;
                    t->next  = del_node->next;
                    cout << "New t node - data = " << t->data << endl;
                    //delete del_node;
                }
                 
            }
            
        }

        void printAll(){
            if(head == NULL){
                cout << "Linked List is Empyty." << endl;
            }
            else{
                MyNode *t = head;
                
                while(t != NULL){
                    cout << t-> data << " -> " ;
                    t = t->next;
                }
                cout << endl;
            }
        }


};



int main()
{
    SLL l;
    l.printAll();
    l.insertAtEnd(10);
    l.insertAtEnd(20);
    l.insertAtEnd(30);
    l.insertAtEnd(40);
    
    l.printAll();
    
    l.deleteInLL(1);
    l.printAll();

    return 0;
}