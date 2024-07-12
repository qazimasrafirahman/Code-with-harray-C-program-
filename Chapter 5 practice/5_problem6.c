#include <stdio.h>

int n_sum(int n);

int n_sum(int n)
{
    // sum(n) = 1 + 2 + 3 + 4 + ... + n - 1 + n;
    // sum(n) = sum(n - 1) + sum(n);
    if (n == 1)
    {
        return 1;
    }
    return n_sum(n - 1) + n;
}

int main()
{
    int n;
    printf("Enter number: \n");
    scanf("%d", &n);

    printf("sum series: %d", n_sum(n));
    return 0;
}