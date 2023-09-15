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

        


};

int main()
{
    // Creating a BST.
    Node *root = new Node(25);
    root -> left = new Node(15);
    root -> left -> left = new Node(10);
    root -> left -> right = new Node(18);
    root -> left -> right -> left = new Node(16);

    root -> right = new Node(40);
    root -> right -> left = new Node(30);
    root -> right -> right = new Node(60);
    root -> right -> right -> left = new Node(50);
    root -> right -> right -> right = new Node(70);
    root -> right -> right -> right -> left = new Node(65);

    // search in BST.

    root -> searchBT(root,40) == NULL ? cout << "There is no such node." << endl : cout << "found node : " << endl;

    // Max node
    Node *maxNode = root->getMaxNode(); 
    cout << "Max node data = " << maxNode->data << endl;

    // min node
    cout << "Min node data = " << (root -> getMinNode(root)) -> data << endl;

    return 0;
}