// #include<stdio.h>
// int swap(int *, int *);
// int main(){
//     int a = 10;
//     int b = 20;
//     swap(&a,&b);
//     printf("a : %d b : %d",a,b);
//     return 0;
// }
// int swap(int *c, int *d){
//     int temp;
//     temp = *c;
//     *c = *d;
//     *d = temp;
//     return 0;
// }

#include<stdio.h>
int main(){
    int a = 10;
    int *p = &a;
    printf("%p\n",&a);
    printf("%p\n",a);
    printf("%d",*p);
    return 0;
}