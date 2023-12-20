#include<stdio.h>
int rectArea(int , int);
int main(){
    int h,w,area;
    printf("Enter Height:");
    scanf("%d",&h);
    printf("Enter Width:");
    scanf("%d",&w);
    area = rectArea(h,w);
    printf("The Rectangle area is : %d",area);
    return 0;
}
int rectArea(int a, int b){
    int area;
    area = a * b;
    return area;
}
