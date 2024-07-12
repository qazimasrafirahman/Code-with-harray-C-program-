#include <stdio.h>

int fibonacchiSeries(int n)
{
    // 0, 1, 1, 2, 3, 5, 8, ....
    if (n == 1 || n == 2)
    {
        return n - 1;
    }
    return fibonacchiSeries(n - 1) + fibonacchiSeries(n - 2);
}

int main()
{
    int n;
    printf("Enter number: \n");
    scanf("%d", &n);

    printf("Fibonacchi series: %d\n", fibonacchiSeries(n));
    return 0;
}