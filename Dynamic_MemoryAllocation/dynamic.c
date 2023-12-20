#include <stdio.h>
#include <stdlib.h>
int main()
{

    // dynamic memory location
    // pointerVariableName = (type_cast)malloc(sizeOf());

    // calloc() syntas
    // pointerVariableName = (type_cast)calloc(sizeof(),elementno);

    int i, n;
    printf("Enter element name");
    scanf("%d", &n);
    int *ptr = (int *)malloc(n * sizeof(int));

    if (ptr == NULL)
    {
        printf("Not Allocated....");
    }
    else
    {
        printf("Allocation Successfully.......\n");
    }

    for (int i=0; i<n; i++){
        printf("Enter data");
        scanf("%d",ptr+i);
    }

    for (int i = 0; i < n; i++)
    {
        printf("%d ", *(ptr + i));
    }

    return 0;
}