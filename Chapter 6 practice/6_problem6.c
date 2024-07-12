#include <stdio.h>

int main()
{
    int i = 2;
    int *j = &i;
    int **k = &j;

    printf("The value of i: %d\n", i);
    printf("The value of j: %d\n", *j);
    printf("The value of k: %d\n", **k);
    return 0;
}