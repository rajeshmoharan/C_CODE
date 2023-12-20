#include<stdio.h>
void swap(int *x, int *y){
    int temp ;
    temp = *x;
    *x = *y;
    *y = temp;

}
int main(){
    int a = 10;
    int b = 20;
    swap(&a,&b);
    printf("%d\n %d",a,b);
    return 0;
}