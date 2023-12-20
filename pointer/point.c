#include <stdio.h>
#include <stdlib.h>
int main()
{
    double x = 40.90;
    double *pt = &x;
    printf("%.2lf\n", *pt);
    printf("The size of pointer : %d",sizeof(pt));
    return 0;
}