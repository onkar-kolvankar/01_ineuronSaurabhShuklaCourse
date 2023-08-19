#include <iostream>

using namespace std;

class MyStack{
    int arr[100];
    int top , size , original_size = 100;

    public:

        MyStack(){
            top = -1;
            size = 0;
        }

        void push(int v)
        {
            if(top + 1 >= original_size){
                cout << "Stack is full." << endl;
            }
            else{
                arr[++top] = v;
            }

        }

        int Top(){
            if(top > -1)
            {
                return arr[top];
            }
            else{
                cout << "The stack is already empty." << endl;
                return -1;
            }
        }

        void pop(){

            if(top > -1){
                top--;
            }
            else{
                cout << "The stack is already empty." << endl;
            }
            
        }

};



int main()
{
    MyStack s;

    s.push(5);
    s.push(19);
    cout << "Top element = " << s.Top() << endl;

    s.pop();
    cout << "Top element = " << s.Top() << " " << endl;

    s.pop();
    cout << "Top element = " << s.Top() << " " << endl;

    return 0;
}