// Write a function to reverse a string word wise. (For example if the given string is 
// “Mysirg Education Services” then the resulting string should be “Services Education 
// Mysirg” )

// Approach 2  - string = "Onkar Kolvanakar"
                        // -> Step 1 -> "raknO rakanavloK"  -> Reverse word on its place
                        // -> Step 2 -> "Kolvankar Onkar"   -> Reverse whole string

#include<stdio.h>
#include<string.h>
void reverseWordInString(char[],int,int);
void reverseString(char[],int);

int main()
{
    char str1[50] = "Services Education MySirG";

    reverseString(str1,50);


    printf("\n%s",str1);

    return 0;
}

void reverseString(char str[],int stringLength)
{
    int start = 0 , end = 0;
    for(end ; str[end] ; end++)
    {
        if(str[start] == ' ' && str[end] == ' ')
        {
            start++;
            continue;
        }
        else if(str[start] != ' ' && str[end] == ' ')
        {
            // printf("\nstart = %d , end = %d",start,end-1);
            reverseWordInString(str,start,end-1);
            start = end + 1;
        }
        else if(str[start] != ' ' && str[end + 1] == '\0')
        {
            // printf("\nstart = %d , end = %d",start,end);
            reverseWordInString(str,start,end);
        }
    }

    // Consider whole string as one word then use the already defined function to reverse the whole string.
    reverseWordInString(str,0,strlen(str)-1);   
}

void reverseWordInString(char str[],int startIndex,int endIndex)
{
    char temp;
    // printf("\nInside reverseWordInString()");
    // printf("\nstartIndex = %d , endIndex = %d",startIndex,endIndex);

    while(startIndex < endIndex)
    {
        // printf("\n---> Inside while loop -");
        temp = str[startIndex];
        str[startIndex] = str[endIndex];
        str[endIndex] = temp;

        startIndex++;
        endIndex--;

        // printf("\n           -> startIndex = %d , endIndex = %d",startIndex,endIndex);
    }
}
