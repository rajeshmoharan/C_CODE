#include<stdio.h>
void sum(); //function declaration
int main(){
    sum(); //function call
    return 0;
}
void sum(){ //function defination
    int a = 20, b = 30, c;
    c = a+b;
    printf("The result is : %d",c);
}
