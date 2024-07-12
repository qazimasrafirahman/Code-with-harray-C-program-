#include <stdio.h>

void force(float m, float g)
{
    float f;
    f = m * g;

    printf("Muss function: %f", f);
}

int main()
{
    float g = 9.8;
    float m;
    printf("Mass: \n");
    scanf("%f", &m);

    force(m, g);
    return 0;
}
