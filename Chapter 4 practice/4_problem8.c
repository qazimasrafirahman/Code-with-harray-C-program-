#include <stdio.h>

int main()
{
    int number;
    printf("Enter number: \n");
    scanf("%d", &number);
    int sum = number;

    for (int i = number - 1; i > 0; i--)
    {
        sum = sum * i;
    }

    printf("Factorial: %d\n", sum);
    return 0;
}