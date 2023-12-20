#include<stdio.h>
void checkPrime(int a);
int main(){
    for (int i=1; i<100; i++){
        checkPrime(i);
        printf("\n");
    }
    return 0;
}
void checkPrime(int a){
    int temp = 1;
    for (int i=2; i<a; i++){
        if (a % i == 0){
            temp ++;
        }
    }
    if (temp == 1){
        printf("%d Prime",a);
    }
    else{
        printf("%d Not Prime",a);
    }
}
