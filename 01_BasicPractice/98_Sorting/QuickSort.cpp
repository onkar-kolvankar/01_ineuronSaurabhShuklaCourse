#include<iostream>

using namespace std;

void printArr(int arr[],int size)
{
    for(int i = 0 ; i < size ; i++)
    {
        cout << arr[i] << " , ";
    }
    cout << endl;
}

int partition(int arr1[],int start,int end)
{
    int pivot = arr1[start]; // leftmost element is pivot

    int lessElmtCount = 0;

    for(int i = start ; i <= end ; i++)
    {
        if(arr1[i] < pivot)
            lessElmtCount++;
    }

    int actualPivotIndex = start + lessElmtCount;

    // swap the element s with that index
    arr1[start] = arr1[actualPivotIndex];
    arr1[actualPivotIndex] = pivot;

    // printArr(arr1,5);

    // now we need to make the all greater elmts on RHS and less on LHS of pivot
    int i = start , j = end;

    while(i < actualPivotIndex && j > actualPivotIndex)
    {
        while(arr1[i] < pivot)
        {
            i++;
        }

        while(arr1[j] > pivot){
            j--;
        }

        // now we have position where we have greater elmt at LHS and the smaller
        // elmt at the RHS .

        int temp = arr1[i];
        arr1[i] = arr1[j];
        arr1[j] = temp;

    }

    return actualPivotIndex;
}

void quickSort(int arr[],int start,int end)
{

    // base case 
    if(start >= end)
        return ;

    
    int p = partition(arr,start,end);

    quickSort(arr,start,p-1);
    quickSort(arr,p+1,end);


}


int main()
{

    int arr[5] = {47,9,25,87,13};
    int arr1[5] = {10,9,8,7,6};
    int arr2[5] = {1,2,3,4,5};
    printArr(arr2,5);


    quickSort(arr2,0,4);

    printArr(arr2,5);



    return 0;
}