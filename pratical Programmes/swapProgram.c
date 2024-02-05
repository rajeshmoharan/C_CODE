#include<stdio.h>
// macro function
#define swapNumber(x,y) x = x+y; y = x-y; x = x-y;
int main(){
    int x = 10;
    int y = 2;
    printf("Before result x : %d\n y : %d\n",x,y);

    // here i will call macro function
    swapNumber(x,y);
    printf("After result x : %d\n y : %d",x,y);

    return 0;
}