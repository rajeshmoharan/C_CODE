#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *ptr = (int *)malloc(3 * sizeof(int));
    // printf("%d\n",sizeof(ptr));
    ptr[0] = 1;
    ptr[1] = 2;
    ptr[2] = 3;

    // resize the memory block to hold 5 integers
    ptr = (int *)realloc(ptr, 6 * sizeof(int));
    ptr[3] = 4;
    ptr[4] = 5;
    ptr[5] = 6;

    for (int i = 0; i <= 5; i++)
    {
        printf("%d ", ptr[i]);
    }
    // free the memory block
    free(ptr);
    return 0;
}