#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n, *ptr;
    printf("Enter no of Element");
    scanf("%d", &n);
    ptr = (int *)malloc(n * sizeof(int));
    for (int i = 0; i < n; i++)
    {
        printf("Enter element :");
        scanf("%d", ptr + i);
    }
    printf("____Printing the Element_____\n");
    // to print the element
    for (int i = 0; i < n; i++)
    {
        printf("Memory address : %d\n", (ptr + i));
    }
    free(ptr);
    return 0;
}