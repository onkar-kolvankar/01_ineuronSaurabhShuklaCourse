// Write a function to transform a string into lowercase

#include<stdio.h>
void getLowerCase(char[]);
int main()
{
    char str[20] = "Onkar Kolvankar";

    getLowerCase(str);

    printf("%s",str);

    
    return 0;
}
void getLowerCase(char string[])
{
    // A-65,Z-90,a-97,z-122

    for(int i = 0  ; string[i] ; i++)
    {
        if(string[i] >= 65 && string[i] <= 90)
            string[i] += 32;
    }
}