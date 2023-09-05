// Binary tree implementation using the array implementation.
#include<iostream>

using namespace std;

class BTarr{
    public:
    int arr_size = 20;
    int arr[20] ={0};

    void insertRoot(int v){
        // root node will be at 1 index in array
        // check if root node is empty or not.
        if(arr[1] == 0)
        {
            // insert at the root node.
            arr[1] = v;
        }
        else{
            cout<< "The root is already present." << endl;
        }
    }

    void insertLeftChild(int v,int parentIndex)
    {
        if(parentIndex*2 < arr_size)
        {
            // means you can insert the element.
            arr[parentIndex*2] = v;
        }
        else{
            cout << "You can't enter the child as the array is full" << endl;
        }

    }
    void insertRightChild(int v , int parentIndex)
    {
        if((parentIndex * 2) + 1   < arr_size)
        {
            arr[parentIndex*2 + 1] = v;
        }
        else{
            cout << "You can't insert elemtn a sthe array is full." << endl;
        }
    }
    void deleteNode(int index)
    {
        // you can only delete the leaf node so check if that node has any childs 
        if(arr[index*2] == 0 && arr[index*2 + 1] == 0 && arr[index] != 0) 
        {
            // now you can delete the node
            arr[index] = 0;
            cout << "Element deleted." << endl;
        }
        else{
            cout<<"We can't delete the element."<<endl;
        }
    }

    void printAll(){
        for(int i = 1 ; i < arr_size ; i++)
        {
            if(arr[i] != 0)
                cout << arr[i] << " ";
            else    
                cout << " - " ;
        }
    }
};


int main()
{
    BTarr t;
    t.insertRoot(10);
    t.insertLeftChild(8,1);
    t.insertRightChild(7,1);
    t.insertLeftChild(6,2);
    t.insertLeftChild(13,3);
    t.insertRightChild(5,4);
    t.insertRightChild(7,6);

    t.printAll();

    t.deleteNode(6);
    t.deleteNode(9);

    t.printAll();


    return 0;
}