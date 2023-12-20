#include<stdio.h>
int sum(); //function declaration
int main(){
    int result = sum(); //function call
    printf("The result is : %d",result);
    return 0;
}
int sum(){  //function defination or function body
    int a = 20, b = 30, c;
    c = a+b;
    return c;
}