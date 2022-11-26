// Write a function to transform string into uppercase

#include<stdio.h>
void getUpperCase(char[]);
int main()
{
    char str[20] = "Onkar Kolvankar";

    getUpperCase(str);

    printf("%s",str);
    
    return 0;
}
void getUpperCase(char string[])
{
    // A-65 , Z-90 , a- 97,z-122
    for(int i = 0 ; string[i] ;i++ )
    {
        if(string[i] >= 97 && string[i] <= 122)
            string[i] -= 32;
    }
}