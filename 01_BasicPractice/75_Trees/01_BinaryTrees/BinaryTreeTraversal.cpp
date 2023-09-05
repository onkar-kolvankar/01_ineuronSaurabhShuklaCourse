// code for the preorder,inorder,postorder traversal in binary tree
#include<iostream>

using namespace std;

class Node{

    public:
        int data;
        Node *left,*right;

        Node(int v)
        {
            data = v;
            left = right = NULL;
        }

        void preorder(Node *root)
        {
            if(root == NULL)
                return;

            cout << root -> data << " " ;
            preorder(root -> left);
            preorder(root -> right);
        }

        void inorder(Node *root)
        {
            if(root == NULL)
                return;
            
            inorder(root->left);
            cout << root->data << " " ;
            inorder(root -> right);
        }

        void postorder(Node *root)
        {
            if(root == NULL)
                return;
            
            postorder(root -> left);
            postorder(root -> right);
            cout << root -> data << " " ;
        }


};


int main()
{
    Node *root = new Node(1);
    root -> left = new Node(4);
    root -> right = new Node(5);
    root -> left -> right = new Node(6);
    root -> left -> right -> left = new Node(12);
    root -> left -> right -> right = new Node(14);
    root -> right -> left = new Node(9);
    root -> right -> right = new Node(10);
    root -> right -> right -> left = new Node(18);

    root->preorder(root);
    cout << endl;
    root->inorder(root);
    cout << endl;
    root->postorder(root);
    cout << endl;

    return 0;
}