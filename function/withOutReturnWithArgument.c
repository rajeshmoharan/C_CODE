#include<stdio.h>
void sum(int a, int b);
int main(){
    sum(20,30);
    return 0;
}
void sum(int a, int b){
    int c = a+b;
    printf("The sum is : %d",c);
}
