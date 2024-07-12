#include <stdio.h>

int main()
{
    int number;
    printf("Enter number: \n");
    scanf("%d", &number);
    int sum = number;
    int i = number - 1;

    while (i >= 1)
    {
        sum = sum * i;
        i--;
    }
    printf("Factorial: %d\n", sum);
    return 0;
}