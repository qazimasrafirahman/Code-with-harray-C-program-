#include <stdio.h>

int main()
{
    int i = 0;
    int sum = 0;
    while (i <= 10)
    {
        sum = sum + i;
        printf("Ten series sum: %d \n", sum);
        i++;
    }
    return 0;
}