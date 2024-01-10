// q- Implement stack and write push and pop function. You are given a string of numbers spaced between
// and now you need to print the alternate numbers in reverse order using stack implementation
// ex : 1 2 3 4
// op : 4 2
// ex : 1 -2 3 4
// op : 4 -2
// ERROR - what i got while solving the queston in exam
// TEST INPUT 1 - TEST FAILED (here even if the output is same but test is failed)
// 1 2 3 4 5 6 7 8 9
// 1 2 3 4 5 6 7 8 9
// 9 7 5 3 1 
// TEST INPUT 2 - TEST FAILED -(here the code would not run)
// 1 -2 3 -4 5 6
// 1 -2 3 -4 5 6

#include <iostream>
#include <string>
#include <bits/stdc++.h>
#include <sstream>
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
  
    void pop(){
      if(top > -1)
        top--;
    }

    int getTop(){
        return arr[top];
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
      string temp;
      stringstream X(line);

      // for(int i = 0 ; line[i] ; i++)
      // {
      //   if(line[i] != ' ')
      //   {
      //       // wrong way - HERE when you give input 10 20 30 then what it does is separates it 
      //       // like 1,0,2,0,3,0 so you get wrong ans
      //     // to convert the char to string
      //     string temp = string(1,line[i]);

      //     // now push that string in mystack after converting to int
      //     m.push(stoi(temp));

      //   }

      // }


      while(getline(X,temp,' ')){
        m.push(stoi(temp,nullptr,10));
      }

      // code to print alternate numbers.
      while(m.getSize())
      {
        cout << m.getTop() << " ";
        m.pop();
        m.pop();
      }

      cout << endl;
    
  } // while outer
} // main() why does it not run