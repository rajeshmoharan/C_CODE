// Q-10 Write a program to swap two numbers using macro.
#include<stdio.h>
//using macro
#define swapNumber(x,y)  x = x+y; y = x-y; x = x-y;
int main(){
    int x = 10 ; 
    int y = 3;

    printf("Before swap : x = %d\n y = %d\n",x,y);

    swapNumber(x,y);

    printf("After Swap : x : %d\n y = %d\n",x,y);
    return 0;
}