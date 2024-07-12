#include <stdio.h>

int main()
{
    float amount;
    printf("Amount: \n");
    scanf("%f", &amount);

    if (amount < 2.5)
    {
        printf("There is no tax.");
    }
    else if (amount >= 2.5 && amount <= 5.0)
    {
        printf("Tax will be: %f", amount * 0.05);
    }
    else if (amount >= 5.0 && amount <= 10.0)
    {
        printf("Tax will be: %f", amount * 0.20);
    }
    else
    {
        printf("Tax will be: %f", amount * 0.30);
    }
    return 0;
}