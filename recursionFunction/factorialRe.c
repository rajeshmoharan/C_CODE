#include<stdio.h>
int fact(int x);
int main(){
    int n = 5;
    int FactorialNum = fact(n);
    printf("The Factorial is %d",FactorialNum);
    return 0;
}
int fact(int x){
    int res;
    if (x == 1){  //base condition
        return 1;
    }
    else{
        res = x*fact(x-1); //recursion call of the function
    }
    return res;
}