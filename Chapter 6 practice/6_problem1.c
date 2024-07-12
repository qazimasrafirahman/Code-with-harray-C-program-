#include <stdio.h>

int main()
{
    int i = 10;
    int *p = &i;
    // Address specifier: p, u
    // Value
    printf("The value: %d\n", i);
    printf("The value: %d\n", *p);
    // Address
    printf("The value: %d\n", &i);
    return 0;
}