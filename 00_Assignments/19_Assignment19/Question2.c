// Write a program to sort 10 city names stored in two dimensional arrays, taken from 
// the user

#include<stdio.h>
#include<string.h>
int compare_strings(char[],char[],int );


int main()
{
    int no_of_strings ,is_swapped = 1;
    printf("Enter number of strings :");
    scanf("%d",no_of_strings) ;

    // taking cities input
    int arr[no_of_strings][40] ,temp_arr[40];
    printf("Enter %d names of cities :");
    for(int i = 0 ; i < no_of_strings ; i++)
    {
        fgets(arr[i],40,stdin);
    }

    // using sorting algo 
    // is_swapped = 1 [default] => swapping took place
    while(is_swapped)
    {
        is_swapped = 0;
        // loop to iterate in diff strings till 2nd last string
        for(int str_no = 0 ; str_no < no_of_strings -1 ; str_no++ )
        {
            // // loop to iterate in the string
            // for(int curr_char = 0 ; arr[str_no][curr_char] || arr[str_no + 1][curr_char] ; curr_char++)
            // {
            //     // check if the strings are in dictionary order or not.
            // }

            if(compare_strings(arr[str_no],arr[str_no+1],40) == -1)
            {
                // strings in rev dict order
                // swap the strings.
                strcpy(temp_arr,arr[str_no]);
                strcpy(arr[str_no],arr[str_no+1]);
                strcpy(arr[str_no+1],temp_arr);

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
int compare_strings(char str1[],char str2[],int arr_size)
{
    int i ;
    for(i = 0 ; str1[i] || str2[i] ; i++ )
    {
        if(str1[i] > str2[i])               // Not dictionary order
            return -1;                                     
                          
    }
    if(str1[i] && str2[i])
        return 0;
    else if(str1[i] == '\0' && str2[i] != '\0')
        return 1;
    else if(str1[i] != '\0' && str2[i] == '\0')
        return -1;


}