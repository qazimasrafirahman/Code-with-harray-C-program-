#include <stdio.h>

int main()
{
    int num[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int *ptr = num;

    printf("Address: %d \n", ptr);
    printf("The third value is: %d", *(ptr + 2));
    return 0;
}