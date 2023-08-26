#include <iostream>
#define arr_size 5

using namespace std;

void selectionSort(int [],int);

int main()
{
    int arr[arr_size] = {4,67,13,5,34};

    selectionSort(arr,arr_size);

    for(int i = 0 ; i < arr_size ; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;



    return 0;
}



void selectionSort(int ar[],int size)
{
    int min;

    for(int i = 0 ; i < size -1 ; i++)
    {
        min = i;

        for(int j = i + 1 ; j < size ; j++)
        {
            if(ar[min] > ar[j])
            {
                min = j;
            }
        }
        if(i != min)
        {
            // swap
            int temp;
            temp = ar[i];
            ar[i] = ar[min];
            ar[min] = temp;
        }
    }
}