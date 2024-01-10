#include <iostream>
#include <string>
#include <bits/stdc++.h>
using namespace std;

class mystack{
    
  public:
    int capacity = 100;
    int arr[100];
    int top = -1;
  
    mystack(){
      top = -1;
    };
  
    void push(int v){
      if(top < capacity - 1)
      {
        // top++;
        arr[++top] = v;
      }
    }
  
    int pop(){
      if(top > -1)
      {
        return arr[top--];
      }
      return NULL;
    }
  
    int getSize()
    {
      return top + 1;
    }
    void printAll()
    {
      for(int i = 0 ; i <= top ; i++)
      {
        cout << arr[i] << " ";
      }
    }
  
};

int main() {
  string line;
  
  while (getline(cin, line)) {
    
      cout << line << endl;
      mystack m;

      for(int i = 0 ; line[i] ; i++)
      {
        if(line[i] != ' ')
        {
          // to convert the char to string
          string temp = string(1,line[i]);

          // now push that string in mystack after converting to int
          m.push(stoi(temp));

        }

      }

      // code to print alternate numbers.
      while(m.getSize() != 0)
      {
        if(m.pop() != NULL){
          cout << m.pop();
          m.pop();
          if(m.top > -1){
            cout << " ";
          }
        }
      }
    
  } // while outer
} // main() why does it not run