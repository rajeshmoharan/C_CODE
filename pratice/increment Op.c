#include<stdio.h>
int main(){
    int a = 3;
    int b = a++ + ++a;

    printf("%d ",b);
    return 0;
}

