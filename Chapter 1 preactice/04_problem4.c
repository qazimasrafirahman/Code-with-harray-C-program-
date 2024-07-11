#include <stdio.h>

int main()
{
    int p, r, t, interest;

    printf("Enter p,r,t value: \n");
    scanf("%d%d%d", &p, &r, &t);

    interest = p * r * t;

    printf("Interest: %d", interest);
    return 0;
}