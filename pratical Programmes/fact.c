#include<stdio.h>
int main(){
    int no,fact =1;
    for (int i=1; i<=no; i++){
        fact *= i;
    }
    printf("The Factorial is : %d",fact);
    return 0;
}