#include<stdio.h>
int sum(int a, int b){
    int c = a + b;
    return c;
}
int main(){
    int a = sum(10,20);
    printf("The result is : %d",a);
    return 0;
}