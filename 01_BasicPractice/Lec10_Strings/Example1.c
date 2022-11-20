
#include<stdio.h>
int main()
{
    char city[20];
    char name[10] = {'O', 'n', 'k', 'a', 'r'};
    char surname[10] = "Kolvankar";     // This is better way to initialize char array.
                                        // Both give same result.
    // Instead of garbage value in char array NULL CHARACTER '\0' is stored.

    // To print string
    for (int i = 0; name[i] != '\0';i++)
    {
        printf("%c", name[i]);
    }
    printf("\n");

    for(int i = 0 ; name[i] ; i++)
    {
        printf("%c", name[i]);
    }
    printf("\n");

    // To print using String i.e printf("%s",char_array_name)
    printf("%s", surname);

    printf("\n");

    return 0;
}