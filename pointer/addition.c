#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n, *ptr, sum = 0;
    printf("Enter the element no:");
    scanf("%d", &n);
    // dynamic allocating memory using malloc()
    ptr = (int *)malloc(n * sizeof(int));
    for (int i = 0; i < n; i++)
    {
        printf("Enter the data :");
        scanf("%d", ptr + i);
        sum += *(ptr + i);
    }
    printf("The resuls is : %d", sum);
    return 0;
}