#include<stdio.h>
int sum(int,int); //function declaration
int main(){
    int result = sum(10,20); //function call
    printf("The result is : %d",result);
    return 0;
}
int sum(int a,int b){  //function defination or function body
    int  c;
    c = a+b;
    return c;
}