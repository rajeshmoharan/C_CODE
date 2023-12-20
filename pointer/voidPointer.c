#include<stdio.h>
int main(){
    int no = 50;
    void* ptr = &no;
    printf("Value : %d",*(int*)ptr);
}