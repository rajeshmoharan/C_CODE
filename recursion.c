#include<stdio.h>
int Factorial();
int main(){
    int x = 5; 
   int fac = Factorial(x);
   printf("Result : %d",fac);
    return 0;
}
int Factorial(int x){
    int fact = 1;
    if (x==0){
        return 1;
    }
    else{
        fact = x * Factorial(x-1);
        return fact;
    }
}