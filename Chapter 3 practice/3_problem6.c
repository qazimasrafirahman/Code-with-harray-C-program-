#include <stdio.h>

int main()
{
    int one, two, three, four;
    printf("Enter one number: \n");
    scanf("%d", &one);
    printf("Enter two number: \n");
    scanf("%d", &two);
    printf("Enter three number: \n");
    scanf("%d", &three);
    printf("Enter four number: \n");
    scanf("%d", &four);

    if (one > two && one > three && one > four)
    {
        printf("The greatest number is: %d\n", one);
    }
    else if (two > one && two > three && two > four)
    {
        printf("The greatest number is: %d\n", two);
    }
    else if (three > one && three > two && three > four)
    {
        printf("The greatest number is: %d\n", three);
    }
    else
    {
        printf("The greatest number is: %d\n", four);
    }
    return 0;
}