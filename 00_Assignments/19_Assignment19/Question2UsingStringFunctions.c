// Write a program to sort 10 city names stored in two dimensional arrays, taken from 
// the user
// strcmp -> 
// Return Value	Remarks
//   0	        if strings are equal
//  >0	        if the first non-matching character in str1 is greater (in ASCII) than that of str2.
//  <0	        if the first non-matching character in str1 is lower (in ASCII) than that of str2.
#include<stdio.h>
#include<string.h>
int compare_strings(char[],char[],int );


int main()
{
    int no_of_strings ,is_swapped = 1;
    printf("Enter number of strings :");
    scanf("%d",&no_of_strings) ;
    fflush(stdin);

    // taking cities input
    int arr[no_of_strings][40] ;
    int temp_arr[40];
    printf("Enter %d names of cities :");
    for(int i = 0 ; i < no_of_strings ; i++)
    {
        fgets(arr[i],40,stdin);
        fflush(stdin);
    }

    // sort array
    while(is_swapped)
    {
        is_swapped = 0;
        for(int i =0 ; i < no_of_strings - 1 ; i++)
        {
            if(strcmp(arr[i] ,arr[i+1]) > 0)
            {
                // swap strings.
                strcpy(temp_arr,arr[i]);
                strcpy(arr[i] ,arr[i+1]);
                strcpy(arr[i+1] ,temp_arr);

                is_swapped = 1;
            }
        }
    }
    

    // print array 
    printf("\nNow we check if our code is correct\n");
    for(int m = 0 ; m < no_of_strings  ; m++)
    {
        printf("-%s\n",arr[m]);
    }

    return 0;
}
