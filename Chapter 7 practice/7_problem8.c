#include <stdio.h>

int main()
{
    int a[3][10];

    int n;
    printf("Enter your array size: \n");
    scanf("%d", &n);
    int mul[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &mul[i]);
    }

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            a[i][j] = mul[i] * (j + 1);
        }
    }

    // Print
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }

    return 0;
}