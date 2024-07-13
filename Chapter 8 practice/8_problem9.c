#include <stdio.h>
#include <string.h>

int main()
{
    char message[] = "My name is qazi masrafi rahman";
    char c = 'o';
    int count = 0;

    for (int i = 0; i < strlen(message); i++)
    {
        if (c == message[i])
        {
            count++;
            break;
        }
    }

    if (count)
    {
        printf("Chareacter present is string \n");
    }
    else
    {
        printf("Character is not present in the string \n");
    }

    return 0;
}