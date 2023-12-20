#include<stdio.h>
int findMax(int , int);
int main(){
    int num1,num2,maxNum;
    printf("Enter two Number to find Maximum : ");
    scanf("%d %d",&num1,&num2);
    maxNum = findMax(num1,num2);
    printf("The Maximum Number is : %d",maxNum);
    return 0;
}

int findMax(int num1,int num2){
    if (num1 > num2){
        return num1;
    }
    else{
        return num2;
    }
}