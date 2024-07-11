#include <stdio.h>

int main()
{
    int length, width;
    // length = 5;
    // width = 5;
    printf("Enter length: \n");
    scanf("%d", &length);

    printf("Enter width: \n");
    scanf("%d", &width);

    printf("Area of rectangle: %d", length * width);
    return 0;
}