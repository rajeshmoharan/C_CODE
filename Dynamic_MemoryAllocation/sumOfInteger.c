#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n, *ptr, sum = 0;
    printf("Enter no of Element :");
    scanf("%d", &n);
    ptr = (int *)malloc(n * sizeof(int));
    for (int i = 0; i < n; i++)
    {
        scanf("%d", ptr + i);
    }
    for (int i = 0; i < n; i++)
    {
        sum += *(ptr + i);
    }
    printf("The result is : %d", sum);
    free(ptr);
    return 0;
}