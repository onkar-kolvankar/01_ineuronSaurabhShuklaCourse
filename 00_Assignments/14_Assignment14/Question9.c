// Write a program in C to read n number of values in an array and display it in reverse
// order. Take array values from the user.
// arr{12,55,4,2,99} -> N = 3 -> 4 , 55, 12         
#include<stdio.h>
int main()
{
    int arr_size = 5 , n;
    int arr[arr_size];

    printf("Enter %d array elements :",arr_size);
    for(int i = 0 ; i<arr_size ; i++)
    {
        scanf("%d", &arr[i]);

    }
    printf("\nEnter number of elements you want to display in reverse order between 1 and %d:",arr_size);
    scanf("%d", &n);

    if(n>=1 && n<= arr_size)
    {
        for(int i = n - 1 ; i >= 0 ; i-- )
            printf("%d ", arr[i]);
    }
    else
    {
        printf("You entered value of n is not in range.");
    }
    

    return 0;
}