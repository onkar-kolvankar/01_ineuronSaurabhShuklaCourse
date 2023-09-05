#include <iostream>
// #include<bits/stdc++.h>
using namespace std;

class Node{
    public:

    int data;
    Node *left , *right;

    Node(int v)
    {
        data = v;
        left = NULL;
        right = NULL;
    }


};


int main(){     

    // instant tree making code
    Node *root = new Node(7);
    root -> left = new Node(12);
    root -> right = new Node(2);


    return 0;
}