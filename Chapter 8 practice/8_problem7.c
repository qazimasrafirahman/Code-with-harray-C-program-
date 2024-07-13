#include <stdio.h>
#include <string.h>

int main()
{
    char message[] = "J!ibwf!b!tfdsfu";

    for (int i = 0; i < strlen(message); i++)
    {
        message[i] = message[i] - 1;
    }

    printf("Decrypt Message: %s", message);

    return 0;
}