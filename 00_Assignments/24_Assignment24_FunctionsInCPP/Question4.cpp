// Define a function to print Pascal Triangle up to N lines.
#include<iostream>
using namespace std;

void printPascalTriangle(int);
int get_nCr(int,int);
int getFactorial(int);
int main()
{
    int lines_count;
    cout<< "Enter the number of lines you want to print the pascal triangle:";
    cin >> lines_count;

    printPascalTriangle(lines_count);

    return 0;
}

void printPascalTriangle(int lines_count)
{
    int n = 0 , r = 0;
    for(n = 0 ; n < lines_count ; n++)
    {
        for(r = 0 ; r <= n ; r++)
        {
            cout<<" "<<get_nCr(n,r);
        }
        cout<<endl;
    }


}


int get_nCr(int n , int r)
{
    return getFactorial(n)/(getFactorial(n-r)*getFactorial(r));
}
int getFactorial(int x)
{
    if(x == 0)
        return 1;
    
    return x * getFactorial(x-1);
}