#include<stdio.h>
int main(){
    int *ptr;
    int grades[] ={10,20,30};
    printf("%d\n",*grades);
    printf("%d",&grades[0]);
    return 0;
}