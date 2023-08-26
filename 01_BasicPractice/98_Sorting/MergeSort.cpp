#include <iostream>

using namespace std;

void mergeSort(int[],int , int);

void merge(int[],int,int,int,int);


void mergeSort(int arr[],int start,int end)
{
    int mid = (start + end) / 2;

    if(start == end)
    {
        return ;
    }

    mergeSort(arr,start,mid);
    mergeSort(arr,mid+1,end);

    merge(arr,start,mid,mid+1,end);


}

void merge(int a[],int start1,int end1,int start2,int end2)
{
    // to get how much size of temp array should be 
    //int temp_arr_size = (end1 - start1 + 1) + (end2 - start2 + 1);

    //int temp[temp_arr_size] ;

    int temp[100], ptr_arr1 = start1 , ptr_arr2 = start2 , ptr_temparr = 0;

    while(ptr_arr1 <= end1 && ptr_arr2 <= end2)
    {
        if(a[ptr_arr1] < a[ptr_arr2])
        {
            temp[ptr_temparr] = a[ptr_arr1];
            ptr_temparr++;
            ptr_arr1++;
        }
        else{
            temp[ptr_temparr] = a[ptr_arr2];
            ptr_temparr++;
            ptr_arr2++;
        }
    }

    // now if any 1 array is copied and other is rem then copy it as it is in the temp array
    while(ptr_arr1 <= end1)
    {
        temp[ptr_temparr] = a[ptr_arr1];
        ptr_temparr++;
        ptr_arr1++;
    }

    while(ptr_arr2 <= end2)
    {
        temp[ptr_temparr] = a[ptr_arr2];
        ptr_temparr++;
        ptr_arr2++;
    }

    // now we have the sorted array in temp array 
    // so we just need to copy the array in original array
    
    // start positino will be the start1 and the end position will be the end2 of 2nd array
    for(int original_arr_ptr = start1 , m = 0 ; original_arr_ptr <= end2 ; original_arr_ptr++ , m++)
    {
        a[original_arr_ptr] = temp[m];
    }

}

int main()
{

    int arr[5] = {47,9,25,87,13};
    int arr2[5] = {10,8,6,4,2};

    mergeSort(arr2,0,4);

    for(int i = 0 ; i < 5 ; i++)
    {
        cout << arr2[i] << " ";
    }

    return 0;
}