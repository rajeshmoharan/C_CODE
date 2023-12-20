#include<stdio.h>
int main(){
    int number;
    int result = 0;
    printf("Enter last number to Calculate Addition :");
    scanf("%d",&number);
    for (int i = 0; i<=number; i++){
        result += i;
    }
    printf("The result is : %d",result);

}
