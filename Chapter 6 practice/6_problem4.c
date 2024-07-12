#include <stdio.h>

int swap(int *a, int *b);

int swap(int *a, int *b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

int main()
{
    int a = 10, b = 3;
    printf("Before print the a value %d and b value: %d\n", a, b);
    swap(&a, &b);
    printf("After print the a value %d and b value: %d\n", a, b);

    return 0;
}