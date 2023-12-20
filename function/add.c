#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int add(int a,int b);

int main(){
    printf("Main Function");
    int a,b;
    printf("Enter Number to Addition : ");
    scanf("%d %d",&a,&b);
    int result = add(a, b);
    printf("The result is : %d",result);
}

int add(int a, int b){
    return a+b;
}