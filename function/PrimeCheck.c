#include<stdio.h>
void checkPrime(int a);
int main(){
    for (int i=1; i<=100; i++){
        checkPrime(i);
    }
    return 0;
}
void checkPrime(int a){
    int temp = 0;
    for (int i = 1; i<=a; i++){
        if (a % i == 0){
            temp ++;
        }
    }
    if (temp == 2){
        printf("Prime %d\n",a);
    }
    else{
        printf("Not Prime %d\n",a);
    }
}