#include<stdio.h>
int main(){
    int num , sum = 0;
    printf("Enter number to printfOdd Number : ");
    scanf("%d",&num);

    for (int i = 1; i<= num; i=i+2){
        printf("%d\n",i);
    }
    return 0;
}
