// Write a function in C to print all unique elements in an array
// Method 1 - Use loop to traverse in array

#include<stdio.h>

void printUniqueElmtsInArray(int[], int);

int main()
{
    int array_size;
    printf("Enter size of array :");
    scanf("%d", &array_size);

    int num_array[array_size];

    printf("Please enter %d elements of array:",array_size);
    for (int i = 0; i < array_size;i++)
    {
        scanf("%d", &num_array[i]);
    }

    printUniqueElmtsInArray(num_array, array_size);

    return 0;
}

void printUniqueElmtsInArray( int arr[], int arr_size)
{
    int isUnique;   // 0 => Not Unique, 1 => Unique
    for (int i = 0; i < arr_size;i++)
    {
        isUnique = 1;
        for (int j = 0; j < arr_size;j++)
        {
            if(arr[i] == arr[j] && i != j)
                isUnique = 0;
        }
        if(isUnique == 1)
        {
            printf("%d ", arr[i]);
        }
    }
    if(isUnique == 0)
        printf("There is no unique elmt.");
}