#include <stdio.h>

int main()
{
    int i = 0;
    int sum = 0;
    // For loop
    for (int i = 0; i <= 10; i++)
    {
        sum = sum + i;
        printf("Ten series sum: %d \n", sum);
    }

    // Do while loop
    i = 0;
    sum = 0;
    do
    {
        sum = sum + i;
        printf("Ten series sum: %d \n", sum);
        i++;
    } while (i <= 10);
    return 0;
}