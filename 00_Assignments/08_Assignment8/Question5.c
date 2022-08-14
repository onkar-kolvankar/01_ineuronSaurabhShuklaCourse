/* OUTPUT WHEN YOU USE cols = cols + (2*rows - 1) -1 ; to jump to the req column
- - - - * - - - - 
- - - * * * - - -
- - * * * * * - -
- * * * * * * * -
* * * * * * * * *
*/
/* OUTPUT WHEN you skip the above line. Since it is whitespace it is not visible but if you 
use hypen you will get to know the difference.
--------* --------
------* * * ----------
----* * * * * ------------
--* * * * * * * --------------
* * * * * * * * * ----------------
*/
#include <stdio.h>
int main()
{
    for(int rows = 1 ; rows <= 5 ; rows++)
    {
        for(int cols = 1 ; cols<= 9 ; cols++)
        {
            if(cols == 6 - rows)
            {
                // loop to print stars required number of times which are in AP with cd = 2 , a = 1 
                for(int i = 1 ; i <= (2*rows - 1) ; i++)
                {
                    printf("* ");
                }
                // used to jump to the correct column number since we have printed req * on certain column so we don't 
                // need to check those columns and hence move to the unchecked column.
                cols = cols + (2*rows - 1) - 1; // required to give correct output.
            }
            else{
                printf("  ");
            }
        }
        printf("\n");
    }
    return 0;
}