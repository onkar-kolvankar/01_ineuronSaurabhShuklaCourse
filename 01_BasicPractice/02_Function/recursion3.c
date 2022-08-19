// Tom.Clancys.Ghost.Reacon.Wildlands.Complete.Edition
//  Resident.Evil.Village
//  World War Z : Aftermath - Deluxe Edition
//  
// 
// Mafia: Definitive Edition

#include <stdio.h>

void printnos(int);
int main(int argc, char const *argv[])
{
    printnos(5);
    return 0;
}
void printnos(int n)
{
    if (n != 1)
        printnos(n - 1);

    printf("%d ", n);
}