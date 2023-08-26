#include<iostream>

#define arr_size 5

using namespace std;

int main()
{
    int arr[arr_size] = {7,9,8,5,4};

    int flag=0;

    int end_ind = arr_size - 1;
    while(end_ind >= 1 )
    {   
        flag = 0;   // no swapping took place
        for(int i = 0 ; i <= end_ind -1 ; i++)
        {
            if(arr[i] > arr[i+1])
            {
                // swap these elements
                int temp = arr[i];
                arr[i] = arr[i+1];
                arr[i+1] = temp;

                flag  = 1;
            }
        }

        if(flag == 0)
        {
            // no swapping took place so array is now sorted.
            break;
        }

        end_ind--;
    }

    for(int i = 0 ; i < arr_size ; i++)
    {
        cout << arr[i] << " " ;
    }
    cout << endl;


    return 0;
}