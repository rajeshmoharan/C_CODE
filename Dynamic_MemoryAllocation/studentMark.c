#include <stdio.h>
#include <stdlib.h>
#include<string.h>
int main()
{
    // variable declaration and int
    int sub, *p, totalMark = 0, avrageMark = 0;


    // message print and user input
    printf("Enter subject no :");
    scanf("%d", &sub); // user-4

    // Dynamic memory allocation
    p = (int *)malloc(sizeof(int) * sub); // 4*4 = 16byte

    if (p == NULL)
    {
        printf("Allocation Failed!!!");
        exit(1);
    }

    // loop and user input
    for (int i = 1; i <= sub; i++)
    {
        printf("Enter Mark subject [%d] :", i);
        scanf("%d", &p[i]);
    }

    // confirm message print and user input
    char option;

    printf("Do you need some changes :(y/n)");
    scanf(" %c", &option);

    // conditon check
    if (option == 'y' || option == 'Y')
    {

        printf("Enter subject no :");
        scanf("%d", &sub); // user- 5

        // rellocation memory
        p = (int *)realloc(p, sizeof(int) * sub);

        if (p == NULL)
        {
            printf("Allocation Failed!!!");
            exit(1);
        }

        // loop and user input
        for (int i = 1; i <= sub; i++)
        {
            printf("Enter Mark subject [%d] :", i);
            scanf("%d", &p[i]);
        }
    }

    // loop start and addition of mark
    for (int i = 1; i <= sub; i++)
    {
        totalMark += p[i];
    }

    // for (int i=0; i<strlen(subject); i++){
    //     printf("Paper %c",subject[i]);
    // }

    printf("Total Mark : %d\n", totalMark);
    printf("Avrage Mark : %d", totalMark / sub);

    free(p);
    return 0;
}