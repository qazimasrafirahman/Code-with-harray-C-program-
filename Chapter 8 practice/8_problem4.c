#include <stdio.h>

char *stringFun(char *n, int m, int p);

char *stringFun(char *n, int m, int p)
{

    char *ptr1 = &n[m];
    char *ptr2 = &n[p];

    n = ptr1;
    n[p] = '\0';
    return n;
}

int main()
{
    char name[] = "Siam bhai";
    // printf("%s", name);

    printf("%s ", stringFun(name, 1, 5));
    return 0;
}