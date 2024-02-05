// #include<stdio.h>
// #define pi  3.14 // object like macro
// #define Area(a) ((pi) * (a) * (a)) //function like macro
// int main(){  
//     printf("%lf",Area(2));
//     return 0;
// }

#include<stdio.h>
#define LargeNum(a,b) (a>b)? a : b
int main(){
    int res = LargeNum(10,20);
    printf("Result is : %d",res);
    return 0;
}