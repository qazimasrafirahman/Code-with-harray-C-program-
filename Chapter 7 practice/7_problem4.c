#include <stdio.h>

int pirntArr(int *a, int n);

int pirntArr(int a[], int n)
{
    for (int i = 1; i <= n; i++)
    {
        printf("%d ", a[i]);
    }
}

int main()
{
    int a[10];

    for (int i = 1; i <= 10; i++)
    {
        scanf("%d", &a[i]);
    }

    int size = sizeof(a) / sizeof(a[0]);
    printf("Size: %d", size);

    pirntArr(a, size);

    return 0;
}