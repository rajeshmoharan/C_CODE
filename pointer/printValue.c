#include<stdio.h>
int main(){
    // int x;
    // printf("%d",sizeof(x));

    // int grade1 = 80, grade2 = 90;
    // printf("%d\n",sizeof(grade1+grade2));
    // printf("%d",sizeof(grade1)+sizeof(grade2));

    double *ptr ;
    double grade = 20;
    ptr = &grade;
    printf("%d",sizeof(ptr));

    return 0;
}