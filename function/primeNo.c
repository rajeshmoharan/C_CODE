#include<stdio.h>
void primeCheck(int);
int main(){
    int num;
    printf("Enter range to find Prime :");
    scanf("%d",&num);
    for (int i=1; i<=num; i++){
        primeCheck(i);
    }
    return 0;
}
void primeCheck(int a){
    int count = 0;
    for (int i=2; i<a; i++){
        if (a % i == 0){
            count ++;
        }
    }
    if (count == 0){
        printf("Number is  Prime : %d\n",a);
    }
    else{
        printf("Number is not Prime : %d\n",a);
    }
}