#include<stdio.h>
int main(){
    int no = 50;
    int *p = &no;
    printf("%d\n",*p);
    printf("%d",p);
    return 0;
}