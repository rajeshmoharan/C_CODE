#include<stdio.h>
void funOne (int x){
    if (x>0){
        printf("%d",x);
        // recursion call here
        funOne(x-1);
    }
}
void main(){
    int x = 4; 
    funOne(x);
}