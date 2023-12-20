#include<stdio.h>

int main(){
    int a = 10;
    int *p;
    p = &a;
    printf("The Value of a : %d\n",a);
    printf("The Pointer Point the value of : %d\n",*p);
    printf("The Pointer without * use : %p",&p);
    return 0;
}