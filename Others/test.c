#include <stdio.h>
int main()
{
    int a = 20, c = 10;
    int b = a > c ? a + 1 : c - 5;
    printf("%d\n%d",b,c);
    return 0;
}
