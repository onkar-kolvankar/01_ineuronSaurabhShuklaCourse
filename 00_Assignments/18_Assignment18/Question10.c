// Write a function to find the repeated character in a given string

#include<stdio.h>
#include<string.h>
void getRepeatedChar(char str[] , int size)
{
    int charFreq[288] = {0};

    for(int i = 0 ; str[i] ; i++)
    {
        charFreq[str[i]] ++;
    }

    for(int i = 0 ; i < 288 ; i++)
    {
        if(charFreq[i] > 1)
            printf("%c ", i);
        //printf("%d ",charFreq[i]);
    }

}
int main()
{
    char str[30] = "Onkar studies in mca";
    int arr_size = 0;
    for(; str[arr_size] ; arr_size++);
    // printf("STRING SIZE = %d\n",arr_size);

    strlwr(str);

    getRepeatedChar(str,arr_size);


    
    return 0;
}