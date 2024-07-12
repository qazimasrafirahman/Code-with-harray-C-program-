#include <stdio.h>
void star(int n);

void star(int n)
{
    // n = 0 star 1
    // n = 1 star 3
    // n = 2 star 5
    // no_of_star = (2 * i) + 1
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < (2 * i) + 1; j++)
        {
            printf("*");
        }
        printf("\n");
    }
}
int main()
{
    int n = 3;
    star(n);
    return 0;
}