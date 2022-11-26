// Write a function to reverse a string.
#include<stdio.h>
#include<string.h>

void getRev(char[] , int);
void swapChars(char,char);
int main()
{
    char str[30] = "Onkar kol";
    printf("%s\n",str);

    int arr_size ;
    for(arr_size = 0 ; str[arr_size]; arr_size++);


    getRev(str,arr_size);
    printf("%s",str);
    
    return 0;
}

void getRev(char str[] , int size)
{
   char temp;

    // No need to use the if else - for odd and even size of string because 5/2 = 2 and 4/2 = 2.
    for(int i = 0 ; i <= (size/2) - 1 ; i++)
    {
        temp = str[i];
        str[i] = str[(size-1) - i];
        str[(size-1) -i] = temp;
    }
}
 

