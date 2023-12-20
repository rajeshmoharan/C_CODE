#include<stdio.h>
int main(){
    int num1,num2;
    char op;
    printf("Enter any sysmbot for Operation(+,*,-,/,)");
    scanf("%c",&op);
    printf("Enter two number : ");
    scanf("%d %d",&num1,&num2);
 
    switch (op)
    {
    case '+' : printf("The addition is : %d",num1 +  num2);
                break;
    case '-' : printf("The subtraction is : %d",num1 -  num2);
                break;  
    case '*' : printf("The multiplication is : %d",num1 *  num2);
                break; 
    case '/' : printf("The division  is : %d",num1 /  num2);
                break;
    case '%' : printf("The modulos  is : %d",num1 %  num2);
                break;  
    default: printf("You are entering Invalid Symbol");
                break;
    }
    return 0;
}