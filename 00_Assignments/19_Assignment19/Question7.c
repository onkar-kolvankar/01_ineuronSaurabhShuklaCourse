// From the list of IP addresses, check whether all ip addresses are valid.
// Valid ip address - xxx.xxx.xxx.xxx whrere 0 <= xxx <= 255
// Ascii values - 0 => 48 , 9 => 57 , . => 46

#include<stdio.h>
#include<string.h>
#include<math.h>
int validateIPAddress(char[]);
int getIntOfCharStr(char[],int ,int );

int main()
{
    char ip1[20] = "34.129.234.9";
    char ip2[20] = "0.0.256.0";
    char ip3[20] = "12r.0.120.0";

    printf("%d",validateIPAddress(ip1));

    return 0;
}

int validateIPAddress(char ip[])    // 0 => Not valid.
{
    int start = 0 , end = 0,part = 1,partNo = 0,dotCount = 0;
    // . is present at start and end position then wrong format
    if(ip[0] == '.' || ip[strlen(ip)-1] == '.')
    {
        return 0;
    }
    else
    {
        for(end ; ip[end] ; end++)
        {
            if((ip[end] != 46 ) || ( (ip[end] < 48) && (ip[end] > 57)  ) )
            {
                return 0;
            }
            else if(ip[end] == 46)
            {
                // dot encountered.
                dotCount++;
                if(dotCount > 3)
                    return 0;

                // other operations when dot is encountered.
                partNo = getIntOfCharStr(ip,start,end);
                printf("\n->%d ->%d",part,partNo);
                if(partNo > 255 || partNo < 0)  // invalid ip
                {
                    return 0;
                }
                else        // valid ip part number.
                {
                    start = end + 1;
                }
            }
        }
    }
    return 1;
}

int getIntOfCharStr(char c[],int start,int end)
{
    int num = 0 , digitsCount = 0 , digit = 0;
    for(int i = start ; i <= end ; i++)
    {
        digit = (int)c[i] - 48;
        num += pow(digit,digitsCount);
        digitsCount++;
    }
    return num;
}