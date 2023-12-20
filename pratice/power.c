#include<stdio.h>
int main(){
    int num,pow,result = 1;
    printf("Enter a number :");
    scanf("%d",&num);
    printf("Enter the Power :");
    scanf("%d",&pow);

    while (pow > 0)
    {
        /* code */
        result = result * num;
        pow --;
    }
    printf("The Power of the number is : %d",result);
    return 0;
}