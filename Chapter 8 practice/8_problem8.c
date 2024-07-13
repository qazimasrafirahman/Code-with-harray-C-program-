#include <stdio.h>
#include <string.h>

int main()
{
    char message[] = "My name is qazi masrafi rahman";
    char c = 'm';
    int count = 0;

    for (int i = 0; i < strlen(message); i++)
    {
        if (c == message[i])
        {
            count++;
        }
    }

    printf("Character occuer: %d times", count);

    return 0;
}