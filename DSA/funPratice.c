#include<stdio.h>
int add(int x, int y){
    return x + y;
}
int main(){
    int x,y,c;
    printf("Enter two values");
    scanf("%d%d",&x,&y);
    c = add(x,y);
    printf("The Result is %d",c);
    return 0;
}