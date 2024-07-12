#include <stdio.h>
#include <ctype.h>

int main()
{
    char character;
    printf("Enter a character: \n");
    scanf("%ch", &character);

    if (islower(character))
    {
        printf("The character is lower case. \n");
    }
    else
    {
        printf("The character is upper case.\n");
    }
    return 0;
}