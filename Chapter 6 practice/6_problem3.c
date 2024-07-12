#include <stdio.h>

int change_value_ten_times(int *);

int change_value_ten_times(int *j)
{
    *j = *j * 10;
    return *j;
}

int main()
{
    int i = 10;
    int *j = &i;

    printf("The change value is: %d", change_value_ten_times(j));
    return 0;
}