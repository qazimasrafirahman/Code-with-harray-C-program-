#include <stdio.h>

float avg(float a, float b, float c)
{
    float avg = (a + b + c) / 3;
    return avg;
}

int main()
{
    int a = 3, b = 10, c = 15;
    float result = avg(a, b, c);

    printf("Avg is %.2f", result);

    return 0;
}