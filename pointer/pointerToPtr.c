#include<stdio.h>
int main(){
    int n = 40;
    int *p = &n;
    int **ptr = &p; //pointer to pointer
    printf("The Value of Second  Pointer %d\n",**ptr);
    printf("The address of Second  pointer %d\n",ptr);
    return 0;
}