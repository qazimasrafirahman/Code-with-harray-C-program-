#include <stdio.h>
int *sum(int *a, int *b);

int *sum(int *a, int *b)
{
    int *j;
    int d = *a + *b;
    j = &d;
    return j;
}

float *avg(int *a, int *b);

float *avg(int *a, int *b)
{
    float *i;
    float c = (*a + *b) / 2.0;
    i = &c;
    return i;
}

int main()
{
    int a = 5, b = 10;

    int *ptr1;
    float *ptr2;

    ptr1 = sum(&a, &b);
    ptr2 = avg(&a, &b);

    printf("sum Address: %d\n", ptr1);
    printf("Avg Address: %d\n", ptr2);
    return 0;
}