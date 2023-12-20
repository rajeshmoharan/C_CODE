#include<stdio.h>
int main(){
    int number = 952;
    int rem;
    int sum = 0;
    while (number > 0)
    {   
        rem = number % 10;
        sum = sum + rem;
        number = number / 10;

    }

    printf("The sum of product is : %d",sum);
    return 0;
    
}