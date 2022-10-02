// Write a program to find the smallest number stored in an array of size 10. Take array
// values from the user
#include<stdio.h>
int main()
{
    int num_array[10] , smallest_num;
    
    printf("Enter 10 numbers :");
    for(int i = 0 ; i< 10 ; i++)
    {
        scanf("%d", &num_array[i]);
    }
    
    // Traverse to find smallest num.
    smallest_num = num_array[0];
    for (int i = 0; i < 10; i++)
    {
        if(smallest_num > num_array[i])
            smallest_num = num_array[i];
        
    }

    printf("smallest number in array = %d", smallest_num);
    return 0;
}