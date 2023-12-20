#include<stdio.h>
int main(){
    int num;
    printf("Enter number to print Even and Odd :");
    scanf("%d",&num);
    for (int i=0; i<=num; i++){
        if (i%2 == 0){
            printf("Even Number: %d \n",i);
        }
        else{
            printf("Odd Number: %d \n",i);
        }
    }
    getch();
    return 0;
}
