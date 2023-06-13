#include<iostream>
using namespace std;
void SelectionSort(int[],int);

int main()
{
    int arr[] = {12,11,13,5,6};
    int n = 5;

    SelectionSort(arr,n);

    for(int i = 0 ; i < n ; i++)
    {
        cout << arr[i] << " ";
    }



    return 0;
}

void SelectionSort(int arr[],int n)
{
    if(n <= 1)
        return;

    SelectionSort(arr,n-1);

    int k = n-1;
    while(arr[k-1] > arr[k] )
    {
        int temp;
        temp = arr[k-1];
        arr[k-1] = arr[k];
        arr[k] = temp;

        k--;
    }
}