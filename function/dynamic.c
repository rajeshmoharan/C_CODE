#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n, sum = 0;
    printf("Enter element no:");
f    scanf("%d", &n); 
    int *p = (int *)malloc(n * sizeof(int));

    if (p == NULL)
    {
        printf("Memory Allocation Failed!!! try agian");
    }
    else
    {
        printf("Memory Created Done\n");
        // loop
        for (int i = 0; i < n; i++)
        {
            printf("Enter data: ");
            scanf("%d", &p[i]);
        }

        // visit every element and add the value
        for (int i = 0; i < n; i++)
        {
            sum += p[i];
        }
        printf("Total Value is : %d\n", sum);
        printf("Avrage is %.2f", (float)sum / n);

        free(p);
    }

    return 0;
}