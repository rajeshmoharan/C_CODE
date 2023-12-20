#include<stdio.h>
int main(){
    int num1,num2;
    char symbolEnter ;
    printf("Enter the symbol to do oparation");
    scanf("%c",&symbolEnter);
    printf("Enter two number :");
    scanf("%d %d",&num1,&num2);

    switch(symbolEnter){
    case '+' :
        if (num1 > 0 && num2 > 0){
            printf("%d %c %d = %d",num1,symbolEnter,num2,num1+num2);
        }
        else{
            printf("Check Again !");
        }
        break;


    }
    return 0;
}
