#include<iostream>
#include<cmath>

using namespace std;

class Node{
    public:
    int data;
    Node *left , *right;

    Node(int v){
        data = v;
        left = right = NULL;
    } 

    int getHeight(Node *root)
    {

        // you could also have statement for root == NULL
        if(root == NULL)
            return 0;

        int leftSubtreeH , rightSubtreeH;
        leftSubtreeH = getHeight(root -> left);
        rightSubtreeH = getHeight(root -> right);

        return max(leftSubtreeH,rightSubtreeH) + 1;
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
    root -> right -> right -> left -> left = new Node(25);

    int treeHeight = root->getHeight(root);

    cout <<endl<< "The height of tree = " << treeHeight;

    return 0;
}