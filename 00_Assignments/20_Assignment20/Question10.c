//  Write a program to print a string in reverse using a pointer

#include<stdio.h>
int main()
{
    char str[20] = "Onkar kol";
    char *str_ptr;

    str_ptr = str;
    int str_len = 0;
    for(str_len ; str_ptr[str_len] ; str_len++); //Calculate string length

    for(int i = str_len-1 ; i >= 0 ; i--)
        printf("%c",str_ptr[i]);        // str[i] == str_ptr[i]
        // str[i] = *(str + i) => here str in *(str + i) denotes address of 1st character i.e &str[0]
        

    
    return 0;
}