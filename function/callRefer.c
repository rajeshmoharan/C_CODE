#include<stdio.h>
void swapNumber(int *,int *);
int main(){
    int x = 10;
    int y = 20;
    swapNumber(&x,&y);
    printf("The Varible data is : x : %d\n y : %d",x,y);
    

}
void swapNumber(int  *a, int *b){
        *a = 20;
        *b = 10;
}   