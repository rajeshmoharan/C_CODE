//reverse number
#include<stdio.h>
int main(){
    int n, reverNum=0,temp;
    printf("Enter number to find reverse:");
    scanf("%d",&n);
    while(n != 0){
        temp = n % 10;
        reverNum = reverNum * 10 + temp;
        n = n/10;
    }
    printf("Reverse Number : %d",reverNum);
    return 0;
}