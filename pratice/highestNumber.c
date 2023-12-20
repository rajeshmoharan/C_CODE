#include<stdio.h>

int main(){
    int num1 , num2;
    printf("Enter number One : ");
    scanf("%d",&num1);

    printf("Enter number two : ");
    scanf("%d",&num2);

    if (num1 > num2){
        printf("Largest Number is : %d",num1);
    }
    else{
        printf("Largest Number is : %d",num2);
    }
    return 0;
}
