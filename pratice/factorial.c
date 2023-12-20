#include<stdio.h>
int main(){
    int num;
    int fact = 1; 
    printf("Enter number to find Factorial");
    scanf("%d",&num);
    for (int i=1; i<=num; i++){
        fact = fact * i;
    }
    printf("The Factorial is : %d",fact);

    return 0;
}