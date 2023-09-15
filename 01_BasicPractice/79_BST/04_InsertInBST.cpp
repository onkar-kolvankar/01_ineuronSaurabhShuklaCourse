// Inorder predesessor = Node's Left Subtree's Largest node
// Inorder successor = Node's Rigt Subtree's Min element.

#include<iostream>
using namespace std;

class Node{

    public:
        int data;
        Node *left , *right;

        Node(int v)
        {
            data = v;
            left = right = NULL;
        }

        Node * searchBT(Node *root,int key)
        {
            // we use binary search.
            if(root == NULL)
                return NULL;

            if(root -> data == key){
               return root;
            }
            else if(root -> data > key)
            {
                return searchBT(root -> left,key);
            }
            else{
                return searchBT(root -> right , key);
            }

            // return NULL;
            
        }

        Node * getMinNode(Node *root)
        {
            if(root -> left == NULL)
                return root;

            return getMinNode(root -> left);
        }

        // since we are calling it using object of node we don't need to pass the node in argument it is already passed.
        // but little bit complex to understand.
        Node *getMaxNode()
        {
            if(this -> right == NULL)
                return this;

            return this -> right -> getMaxNode();
        }

        // Inorder predessor
        Node *getInorderPredesessor()
        {
            return this -> left -> getMaxNode();
        }

        // Inorder Successor
        Node * getInorderSuccessor()
        {
            return getMinNode(this -> right);
        }

        Node * insertInBST(int v){
            if(this == NULL)
            {
                return new Node(v);
            }    

            if(this-> data > v){
                this -> left = this -> left -> insertInBST(v);
            }
            else if(this-> data <= v){
               this -> right = this -> right -> insertInBST(v);
            }
            return this;
        }

        // get inorder traversal
        void printInorderT()
        {
            if(this == NULL)
                return;

            this -> left -> printInorderT();
            cout << this -> data << " " ;
            this -> right -> printInorderT();
        }
};



int main(){

    Node *root = new Node(20);
    root -> left = new Node(15);
    root -> left -> left = new Node(10);
    root -> left -> right = new Node(18);
    root -> left -> right -> left = new Node(16);
    root -> left -> right -> right = new Node(19);

    root -> right = new Node(25);
    root -> right -> left = new Node(23);
    root -> right -> left -> right = new Node(24);

    root -> right -> right = new Node(30);
    root -> right -> right -> left = new Node(28);
    root -> right -> right -> right = new Node(70);

    root -> printInorderT();
    cout << endl;
    root -> insertInBST(22);
    root -> printInorderT();
    
    

    return 0;
}