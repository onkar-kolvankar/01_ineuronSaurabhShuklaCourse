// checking what are the pointers
#include<stdio.h>
int main()
{
    int arr[5] = {11,22,33,44,55};

    printf("%d\n",*&arr[0]);
    printf("%d\n",*&arr);
    printf("%d\n",*arr);

    // OP-
    // Example2.c -o Example2 } ; if ($?) { .\Example2 }
    // 11
    // -1134561744
    // 11
    return 0;
}