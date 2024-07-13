#include <stdio.h>

void strlength(char *name);

void strlength(char *name)
{
    int i = 0, count;
    char c = name[i];
    // printf("c: %c\n", c);

    while (c != '\0')
    {
        c = name[i];
        // printf("inside c: %c\n", c);
        i++;
    }

    count = i - 1;
    printf("string Length: %d\n", count);
}

int main()
{
    char name[] = "siam";
    printf("%s\n", name);

    strlength(name);

    return 0;
}