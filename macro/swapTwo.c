#include<stdio.h>
// #define swap(x, y, temp) temp = x; x = y; y = temp; 
#define swap(x,y) x = x + y ; y = x - y; x = x - y;
int main(){
    int x = 3; 
    int y = 10;
    int temp;
    swap(x,y);
    printf("x:%d\n y: %d",x,y);
    return 0;
}