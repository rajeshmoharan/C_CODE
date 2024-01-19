//Wap to find factorial of a given number
#include<stdio.h>
int main(){
    int n,fact = 1;
    printf("Enter number to find Factorial:");
    scanf("%d",&n);
    for (int i=1; i<=n; i++){
        fact = fact * i;
    }
    printf("Factorial of a number : %d",fact);
    return 0;
}