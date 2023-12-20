#include<stdio.h>
int main(){
    int markArr[5];
    int result = 0;

    for(int i=0; i<5; i++){
        printf("Enter number for Addition : ");
        scanf("%d",&markArr[i]);
    }


    for(int i=0; i<5; i++){
        result += markArr[i];
    }
    printf("The result is : %d",result);
    return 0;
}
