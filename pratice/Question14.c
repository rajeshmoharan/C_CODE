
#include<stdio.h>

void swapNum();
int main(){
    int a,b;
    printf("Enter two number to Swap");
    scanf("%d %d",&a,&b);
    swapNum(&a,&b);
    printf("a : %d b : %d",a,b);
    return 0;
}

void swapNum(int *a,int *b){
    int tmp;
    tmp = *a;
    *a = *b;
    *b = tmp;
}