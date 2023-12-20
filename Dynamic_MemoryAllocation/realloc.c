#include <stdio.h>
#include <stdlib.h>
int main()
{
    int *gradeArr;
    int totalGrades;
    printf("Enter total Grades");
    scanf("%d", &totalGrades);
    gradeArr = (int *)malloc(sizeof(int) * totalGrades);
    if (gradeArr == NULL)
    {
        printf("Memory Allocation Failed");
        exit(1);
    }
    else
    {
        printf("Memory Allocated Successfully\n");
    }
    for (int i = 1; i <= totalGrades; i++)
    {
        printf("Enter grade %d\n", i);
        scanf("%d", gradeArr + i);
    }
    for (int i = 1; i <= totalGrades; i++)
    {
        printf("The grades %d\n", *(gradeArr + i));
    }

    printf("Enter total Grades");
    scanf("%d", &totalGrades);
    gradeArr = (int *)realloc(gradeArr, sizeof(int) * totalGrades);
    for (int i = 1; i <= totalGrades; i++)
    {
        printf("Enter grade %d\n", i);
        scanf("%d", gradeArr + i);
    }
    for (int i = 1; i <= totalGrades; i++)
    {
        printf("The grades %d\n", *(gradeArr + i));
    }
    return 0;
}