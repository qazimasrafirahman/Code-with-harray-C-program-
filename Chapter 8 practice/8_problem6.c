#include <stdio.h>
#include <string.h>

int main()
{
    char message[] = "I have a secret";

    for (int i = 0; i < strlen(message); i++)
    {
        message[i] = message[i] + 1;
    }

    printf("Encrypt Message: %s", message);

    return 0;
}