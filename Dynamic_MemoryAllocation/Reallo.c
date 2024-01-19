#include <stdio.h>
#include <stdlib.h>
int main()
{
    int sub, *p, avrageMark;
    printf("Enter subject:");

    scanf("%d", &sub);
    //dynamic creating memory
    p = (int *)malloc(sizeof(int) * sub);

    // checking null or not
    if (p == NULL)
    {
        printf("Allocation Failed...");
        return 1;
    }

    for (int i = 0; i < sub; i++)
    {
        printf("Enter Mark :");
        scanf("%d", &p[i]);
    }

    char choice;
    printf("\nDo you want to reallocate memory? (y/n): ");
    scanf(" %c", &choice);
    if (choice == 'y' || choice == 'Y')
    {
        int newSub;
        printf("Enter subject:");
        scanf("%d", &newSub);
        // reallocating memory
        p = (int *)realloc(p, sizeof(int) * sub);

        for (int i = 0; i < newSub; i++)
        {
            printf("Enter Mark :");
            scanf("%d", &p[i]);
        }
        sub = newSub;
    }

    printf("_____Final Subject Mark_______\n");

    for (int i = 0; i < sub; i++)
    {
        avrageMark = avrageMark + p[i];
    }

    printf("Avrage Mark : %d percentage\n",avrageMark);
    printf("Avrage Mark : %d percentage",avrageMark/sub);

    free(p);
    return 0;
}