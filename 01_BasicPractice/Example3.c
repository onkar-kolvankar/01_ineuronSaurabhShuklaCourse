// To test ESCAPE SEQUENCES

#include<stdio.h>
int main()
{
    // /n -> New Line

    // /t -> Tab Space
    printf("Onkar/tKolvankar");

    // /b -> Back Space Moves the cursor 1 space backwards.
    printf("Hello Onkar\b\bW");

    // /r -> Carriage Return 
    printf("Hello Onkar\rWhat");



    // /f -> Form Feed
    printf("Hello Onkar\fWhat");

    /* OUTPUT
    Hello Onkar
               What
    */

    return 0;
}