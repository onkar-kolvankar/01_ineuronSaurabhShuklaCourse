// Write a function to swap strings of two char arrays of calling functions. (TSRS)

#include<stdio.h>

void swapStrings(char *,char *,int);
int main()
{
    char str1[20] = "Onkar Kol" ,str2[20] = "Naruto Kakashi";

    swapStrings(str1,str2,20);
    printf("string 1 = %s , string 2 = %s",str1,str2);
    
    return 0;
}
void swapStrings(char *c1,char *c2,int size)
{
    for(int i = 0 ; i < size ; i++)
    {
        char temp;
        temp = *(c1 + i);
        *(c1 + i)= *(c2+i);
        *(c2+i) = temp;
    }
}