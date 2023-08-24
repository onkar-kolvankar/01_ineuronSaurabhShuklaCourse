#include <iostream>

using namespace std;

class mNode{
    public:
    int data;
    mNode *next;
    mNode *prev;

    
        mNode(){
            data = 0;
            next = NULL;
            prev = NULL;
        }
};

class DLL{
    public:
        mNode *head;

        DLL(){
            head = NULL;
        }

        void insert(int v , int pos)    // pos = 1,2,3,...
        {
            
            
            if(head == NULL)
            {
                if(pos == 1)
                {
                    // insert 
                    mNode *newNode = new mNode();
                    newNode->data = v;
                    head = newNode;
                }
                else{
                    cout << "Please enter the valid position. DLL is emptty" << endl;
                }
            }
            else{
                // threere is atleast 1 elemt in dll
                int x = pos;
                mNode *temp = head;
                while(x > 1 && temp -> next != NULL)
                {
                    temp  = temp -> next;
                    x--;
                }

                // cout << "While loop done. Node = " << temp->data << endl;
                // cout << "1st = " << head -> data << endl;

                if(x == 1) {
                    // means you are at correct pos and node at that pos is available.
                    // cout << "x== 1." << endl;
                    mNode *newNode = new mNode();
                    newNode -> data = v;

                    newNode -> next = temp;
                    newNode -> prev = temp -> prev;
                    
                    if(temp -> prev != NULL){ // means it is not 1st node
                        temp -> prev -> next = newNode;
                        temp -> prev = newNode;
                    }
                    else{
                        // means it is 1st node
                        temp -> prev = newNode;
                        head = newNode;
                    }
                    // cout << "-----1st = " << head -> data << endl;
                    
                    // head = newNode;
                }
                else if(x==2){
                    // means you just want to enter at the last
                    mNode *newNode = new mNode();
                    newNode -> data = v;

                    temp -> next = newNode;
                    newNode -> prev = temp;
                    
                }
                else
                {
                     // there is no node at that postitoin    
                    cout << "Please enter the correct postion." << endl;
                }

                // cout << "1st = " << head -> data << endl;


            }
        }

        void deleteDLL(int pos)
        {
            int x = pos ;
            mNode *temp = head;
            while (x > 1 && temp -> next != NULL)
            {
                temp = temp -> next;
                x --;
            }

            if(x != 1)
            {
                cout << "Please enter the correct position" << endl;
            }
            else{
                if(temp -> next == NULL) {
                    // last elemetn is to be deleted
                    if(temp -> prev == NULL)
                    {
                        // 1st and only node 
                        head = NULL;   
                    }
                    else{
                        temp -> prev -> next = NULL;
                    }
                }
                else{
                    // the node might be in the middle or 1st node with more behind it
                    if(temp -> prev != NULL)
                    {   
                        // not a 1st node
                        temp -> prev -> next = temp -> next;
                        temp -> next -> prev = temp -> prev;
                    }
                    else{
                        // 1st node
                        temp -> next -> prev = NULL;
                        head = temp -> next;
                    }
                    
                }
                delete temp;
            }

            
        }

        void printAll(){
            mNode *temp = head;
            while(temp != NULL)
            {
                cout << temp -> data << " <-> " ;
                temp = temp -> next;
            }
            cout << endl;
        }



    

};

int main()
{
    DLL dll;
    dll.insert(10,1);
    dll.insert(20,2);
    dll.insert(30,1);
    dll.insert(40,1);
    // dll.printAll();
    dll.insert(50,4);
    dll.printAll();
    dll.deleteDLL(1);
    dll.printAll();


    return 0;
}