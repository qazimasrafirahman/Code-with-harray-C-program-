#include <stdio.h>

int main()
{
    int sum = 0;

    for (int i = 0; i <= 10; i++)
    {
        sum += (8 * i);
    }

    printf("Sum of 8 series: %d\n", sum);
    return 0;
}