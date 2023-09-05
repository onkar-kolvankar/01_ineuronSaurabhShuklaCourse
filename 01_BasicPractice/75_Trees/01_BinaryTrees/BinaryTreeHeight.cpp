#include<iostream>
#include<queue>

using namespace std;

class Node{
    public:
        int data;
        Node *left,*right;

        Node(int v)
        {
            data = v;
            left = NULL;
            right = NULL;
        }

        int getTreeHeight(Node *root)
        {
            int height = 0;
            queue <Node *> q;

            q.push(root);
            q.push(NULL);

            while(q.empty() == false)
            {
                Node *temp = q.front();
                if(temp == NULL)
                    break;

                cout << temp -> data << " ";

                if(temp -> left != NULL)
                    q.push(temp -> left);

                if(temp -> right != NULL)
                    q.push(temp -> right);

                q.pop();
                if(q.front() == NULL)
                {
                    // increase the counter
                    height++;
                    q.pop();
                    q.push(NULL);

                }
            }
            return height;
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

    int treeHeight = root->getTreeHeight(root);

    cout <<endl<< "The height of tree = " << treeHeight;

    return 0;
}