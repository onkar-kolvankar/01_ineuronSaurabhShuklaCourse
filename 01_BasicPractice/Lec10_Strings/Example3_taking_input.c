#include<stdio.h>
int main()
{
    char name[10];

    printf("Enter your name :");
    //  WRONG APPROACH - You have not initialized the name array so it will contain Garbage value Not Null Value
    /*  for (int i = 0; name[i]; i++)
        {
            scanf("%c", name[i]);
        }
    */

    // WRONG WAY - Using "%s"  -> scanf("%s",name);   -> With %s you will only use <arr_name> NOT []
    // scanf is not suitable for taking string input
    // - It will only take 1 word as input.
    // - <space> <tab> <new line> are delimiters for scanf()
    scanf("%s", name);

    // Print the name
    printf("%s", name);

    // WRONG METHOD 2- You can use gets() - which is now discontinued -> unsafe to use.
    // - If you have anything in buffer then it will take that as input
    // - and if 1st character is space then it will assusme that no input was passed 
    // - So if you entered - Onkar kolvankar in previous 
    printf("\nEnter your name (using gets() ): ");
    fflush(stdin);      // YOU NEED TO USE THIS SO gets does not take <space> stored in input buffer.
    gets(name);

    printf("%s", name);

    // CORRECT WAY - Use fgets() -> fgets(array_name,array_size,FILE_*stream)




    return 0;
}