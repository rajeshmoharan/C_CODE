#include<stdio.h>
void fackNum(int a);
int main(){
    for (int i=2; i<=15; i++){
        fackNum(i);
    }
    return 0;
}
void fackNum(int a){
    int fact = 1;
    for (int i=1; i<=a; i++){
        fact = fact * i;
    }
    printf("Factorial %d\n",fact);
}