#include <stdio.h>

int printArr(int *a, int n);

int printArr(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
    printf("\n");
}

int reverse(int a[], int n);

int reverse(int a[], int n)
{
    int temp;
    for (int i = 0; i < n / 2; i++)
    {
        temp = a[i];
        a[i] = a[n - i - 1];
        a[n - i - 1] = temp;
    }
}

int main()
{
    int a[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    // int n = 5;

    printArr(a, 10);
    reverse(a, 10);
    printArr(a, 10);

    return 0;
}