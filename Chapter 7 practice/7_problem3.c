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
    int n = 5;

    for (int i = 1; i <= 10; i++)
    {
        a[i] = n * i;
    }

    // printf("Address: %d\n", a);
    pirntArr(a, 10);
    return 0;
}