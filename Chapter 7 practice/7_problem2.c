#include <stdio.h>

int main()
{
    int s[3] = {1, 2, 3};

    printf("The third address is: %d \n", *(s + 3));
    printf("The third address is: %d \n", &s[3]);
    return 0;
}