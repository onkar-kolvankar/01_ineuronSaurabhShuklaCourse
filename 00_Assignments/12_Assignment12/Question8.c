// Write a recursive function to print binary of a given decimal number
#include <stdio.h>

void getBinary(int);

int main()
{
    int n;
    printf("Enter a number :");
    scanf("%d", &n);

    if(n==0)
        printf("0");
    else
        getBinary(n);
    return 0;
}
void getBinary(int num)
{
    
  if(num == 1)
  {
      printf("1");
  }
  else
  {
      getBinary(num / 2);
      printf("%d", num % 2);
  }
}