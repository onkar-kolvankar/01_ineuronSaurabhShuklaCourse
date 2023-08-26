#include <iostream>

#define arr_size 5

using namespace std;

void InsertionSort(int [],int );


int main()
{
    int arr[arr_size] = {47,9,25,87,13};

    InsertionSort(arr,arr_size);

    for(int i = 0 ; i < arr_size ; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}

void InsertionSort(int a[],int size)
{
    // int innerCount = 0;
    int x;
    // here we start from index 2 as the sub arr with just index 1 is already sorted
    for(int i = 1; i < size ; i++)
    {
        // this is the loop who take elmt 1 by one then puts them at their correct position
        
        for(x = i;x-1 >= 0 ; x-- )
        {
            // innerCount++;
            if(a[x] <a[x-1]){
                // swap
                int temp = a[x-1];
                a[x-1] = a[x];
                a[x] = temp;
            }
            else{
                break;
            }
        }
    }
    // cout << "Innser Loop count = " << innerCount << endl;
}