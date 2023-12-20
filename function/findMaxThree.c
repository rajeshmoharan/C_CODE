#include<stdio.h>
int findMaxThree(){
    int num1,num2,num3;
    printf("Enter three number to find Maximum : ");
    scanf("%d%d%d",&num1,&num2,&num3);
    if (num1>num2 && num1 > num3){
        return num1;
    }
    else if (num2 > num1 && num2 > num3){
        return num2;
    }
    else{
        return num3;
    }
    
}
int main(){
    int max;
    max=findMaxThree();
    printf("The Maximum Number is : %d",max);
    return 0;
}