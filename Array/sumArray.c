#include<stdio.h>
int main(){
    int arr[] ={2,3,4,5,6,7,8};
    int sum = 0;
    for (int i=0; i<=6;i++){
        sum = sum + arr[i];
    }

    printf("Sum is %d",sum);
    return 0;
}