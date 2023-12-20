#include<stdio.h>
int main(){
    int num,result = 0, temp ;
    printf("Enter any Number to Sum of Digit :");
    scanf("%d",&num);
    while (num != 0)
    {
        /* code */
        temp = num % 10;
        result = result + temp;
        num = num/10;
    }
    printf("Sum of Digit is : %d", result);
    return 0;
}