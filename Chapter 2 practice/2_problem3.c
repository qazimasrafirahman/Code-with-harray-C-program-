#include <stdio.h>

int main()
{
    int number;

    printf("Enter number: \n");
    scanf("%d", &number);

    printf("Reminder is: %d\n", number % 97);
    return 0;
}