#include <stdio.h>

int main()
{
    int marks1, marks2, marks3, marks4, total_percentange;
    printf("Enter four marks mark: \n");
    scanf("%d%d%d%d", &marks1, &marks2, &marks3, &marks4);
    total_percentange = (marks1 + marks2 + marks3 + marks4) / 4;

    if (marks1 <= 33 || marks2 <= 33 || marks3 <= 33 || marks4 <= 33 && total_percentange <= 40)
    {
        printf("The student will fail. \n");
    }
    else
    {
        printf("The student will pass. \n");
    }
    return 0;
}