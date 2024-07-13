#include <stdio.h>

int main()
{
    char description[5];

    // %s
    scanf("%s", &description);
    printf("%s", description);

    // %c
    // for (int i = 0; i < 4; i++)
    // {
    //     scanf("%c", &description[i]);
    //     fflush(stdin); //enter skip
    // }

    // description[4] = '\0';

    // for (int i = 0; i < 5; i++)
    // {
    //     printf("%c", description[i]);
    // }

    return 0;
}