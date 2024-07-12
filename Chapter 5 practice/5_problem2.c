#include <stdio.h>

void ferhenhite(int c)
{
    float fer = ((c * (9.0 / 5.0)) + 32);
    printf("Ferhenhite: %f", fer);
}

int main()
{
    int celcius = 25;
    ferhenhite(celcius);

    return 0;
}