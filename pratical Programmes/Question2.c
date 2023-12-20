#include<stdio.h>
int main(){
    char sb;
    printf("Enter symbol to operation('+','-','*','/',%)");
    scanf("%c",&sb);
    int no1,no2;
    printf("Enter two Number");
    scanf("%d %d",&no1,&no2);
    switch (sb)
    {
    case '+' : printf("The addition result : %d",(no1+no2));
        break;
    case '-' : printf("The subtraction result : %d",(no1-no2));
        break;
    case '/' : printf("The division result : %d",(no1/no2));
        break;
    case '*' : printf("The multiplication result : %d",(no1*no2));
        break;
    case '%' : printf("The modulos result : %d",(no1%no2));
        break;
    default:   printf("Invalid Operation");
        break;
    }

    return 0;
}