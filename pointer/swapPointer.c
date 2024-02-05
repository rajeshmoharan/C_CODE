
#include<stdio.h>
int main(){
    int a = 10;
    int b =20;

    printf("a : %d b: %d\n",a,b);
    int *pt = &a; 
    int *pt1 = &b;
    int temp = *pt;
    *pt = *pt1;
    *pt1 = temp;

    printf("a : %d b %d",a,b);
    return 0;
}