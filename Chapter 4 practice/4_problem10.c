#include <stdio.h>

int main()
{
    int n = 4;
    int prime = 0;

    if (n == 0 || n == 1)
    {
        prime = 1;
    }
    else
    {

        for (int i = 2; i < n; i++)
        {
            if (n % i == 0 && n != 2)
            {
                prime = 1;
                break;
            }
        }
    }

    if (prime == 0)
    {
        printf("%d is a prime number\n", n);
    }
    else
    {
        printf("%d is not a prime number\n", n);
    }

    return 0;
}