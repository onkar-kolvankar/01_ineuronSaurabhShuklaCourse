#include<stdio.h>
#include<string.h>
int main()
{
    char s1[10] = "apple";  // Dictionary order
    char s2[10] = "applezsA";  // Therfore op - <0

    printf("%d - ",strcmp(s1,s2));
    if(strcmp(s1,s2) > 0)
        printf("Reverse Dictionary order.");
    else if(strcmp(s1,s2) == 0)
        printf("Same string");
    else
        printf("Dictionary order");

    printf(" str len - %d ",strlen(s1));
    // char s1[10] = "appLe";  
    // char s2[10] = "apple"; 

    
    // s1 > s2 ? printf("Reverse Dictionary order") : printf("Dictionary order") ; 
    

    return 0;
}
