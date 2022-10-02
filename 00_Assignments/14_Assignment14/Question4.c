// Write a program to find the greatest number stored in an array of size 10. Take array
// values from the user.
#include<stdio.h>
int main()
{
    int num_array[10] , greatest_num = 0;
    
    printf("Enter 10 numbers :");
    for(int i = 0 ; i< 10 ; i++)
    {
        scanf("%d", &num_array[i]);
    }
    
    // Traverse to find greatest num.

    for (int i = 0; i < 10; i++)
    {
        if(greatest_num < num_array[i])
            greatest_num = num_array[i];
        
    }

    printf("Greatest number in array = %d", greatest_num);
    return 0;
}