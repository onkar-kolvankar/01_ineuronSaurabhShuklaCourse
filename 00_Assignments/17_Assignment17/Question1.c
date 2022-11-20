// Write a program to calculate the length of the string. (without using built-in method)

#include<stdio.h>
// #include<string.h>
int main()
{
    char str_input[20] = "Onkar kolvankar";
    int i;

    // DOUBT - Taking input string results in 1 EXTRA character which is what I don't know.
    
    // printf("Enter the string :");
    // fgets(str_input,20,stdin);


    for(i = 0 ; str_input[i] ; i++);

    printf("length of string is %d",i);
    return 0;
}