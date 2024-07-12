#include <stdio.h>

int num_of_pos_int(int *ptr, int n);

int num_of_pos_int(int *ptr, int n)
{
    int count = 0;

    for (int i = 0; i < n; i++)
    {
        if (ptr[i] > 0)
        {
            count++;
        }
    }

    return count;
}

int main()
{
    int a[7] = {1, 2, 3, 4, -1, -2, -2};
    int *ptr = &a[0];

    printf("Total positive value is: %d", num_of_pos_int(ptr, 7));
    return 0;
}