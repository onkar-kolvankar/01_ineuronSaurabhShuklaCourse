// From the list of IP addresses, check whether all ip addresses are valid.
// Valid ip address - xxx.xxx.xxx.xxx whrere 0 <= xxx <= 255
// Ascii values - 0 => 48 , 9 => 57 , . => 46

// NOTE -: A strtok() function modifies the original string and puts a 
// NULL character ('\0') on the delimiter position on each call of the strtok() function. 
// In this way, it can easily track the status of the token.

#include<stdio.h>
#include<string.h>
#include<stdlib.h>  // for atoi()

int validateIpAddress(char *);

int main()
{
    char ip1[] = "123.54.34.200";
    char ip2[] = "123.54.5";

    if(validateIpAddress(ip2) == 1)
        printf("Valid Address");
    else
        printf("Invalid Address");
    


    return 0;
}
int validateIpAddress(char *ip)
{
    int dotCount = 0;

    char *str = NULL; 
    str = strtok(ip,".");
    if(str != NULL){
        dotCount++;
        // printf("dotCount = %d\n",dotCount);
    }
        
    else
        return 0;   // invalid ipaddress.

    while(str != NULL)
    {
        int num = atoi(str);
        if(num < 0 || num > 255)
        {
            return 0;   // invalid ipaddress.
        }
        else
        {
            // printf("%d ",num);

            str = strtok(NULL,".");
            if(str != NULL){
                dotCount++;
                // printf("dotCount = %d\n",dotCount);
            }
                


        }
    }
    // printf("dotCount = %d\n",dotCount);

    if(dotCount == 4)
        return 1;
    else 
        return 0;
}

