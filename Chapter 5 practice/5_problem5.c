#include <stdio.h>

int main()
{
    int a = 4;

    // pre increment
    // i) a = a + 1
    // ii) use a

    // post increment
    // i) use a
    // ii) a = a + 1

    printf("%d %d %d \n", a, ++a, a++);
    return 0;
}