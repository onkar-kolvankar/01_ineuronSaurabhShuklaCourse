#include<stdio.h>
#include<string.h>

void splitChar(char[] ,char[][] ,int ,int );

int main()
{
    char ip[30],ipBytesChar[5][10];
    
    printf("Enter the string 3 using cin.getline(str,length) :");
    fgets(ip,30,stdin);
    fflush(stdin);

    printf("%s",ip);
    printf("Length of string 3 : %d", strlen(ip));

    // split the string based on the '.' 
    splitChar(ip,ipBytesChar,5,10);

    for(int i = 0 ; i < 5 ; i++)
    {
        printf("%s",ipBytesChar[i]);
        printf("\n");
    }

    return 0;
}
void splitChar(char ip[] ,char ipBytesChar[][],int arrCount,int arrLen)
{
    int partCount = 0;
    for(int i = 0 ; i < strlen(ip)-1 ; i++)
    {
        if(ip[i] !='.')
        {
            ipBytesChar[partCount][i] = ip[i];
        }
        else{
            partCount++;
        }
    }
}

