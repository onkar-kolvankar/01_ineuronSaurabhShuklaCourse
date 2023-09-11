#include<iostream>
#include<cmath>

using namespace std;

class Node{
    public:

    int data;
    Node *left,*right;

    Node(int v){
        data = v;
        left = right = NULL;
    }

    int getHeight(Node * root)
    {
        if(root == NULL)
            return 0;
        
        int leftSubtreeHeight , rightSubtreeHeight;

        leftSubtreeHeight = getHeight(root -> left);
        rightSubtreeHeight = getHeight(root -> right);
        
        return max(leftSubtreeHeight,rightSubtreeHeight) + 1;

    }

    void levelOrderTRec(Node *root){
        int height = getHeight(root);

        // height starts from 1 acc. to no of nodes visited in this code.
        // level starts from 0 to height - 1;
        for(int l = 0 ; l < height ; l++)
        {
            printLevel(root , l);
        }
    }

    void printLevel(Node *root , int level){

        if(root == NULL)
            return;
        
        if(level == 0){
            cout << root -> data << " ";
        }
        else{
            // level > 0
            printLevel(root -> left , level - 1);
            printLevel(root -> right , level - 1);

        }    

    }


};

int main()
{
    Node *root = new Node(10);
    root -> left = new Node(13);
    root -> left -> right = new Node(39);

    root -> right = new Node(4);
    root -> right -> left = new Node(7);
    root -> right -> right = new Node(9);
    root -> right -> right -> left = new Node(3);


    root -> levelOrderTRec(root);




    return 0;
}