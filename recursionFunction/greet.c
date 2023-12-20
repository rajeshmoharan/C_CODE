#include<stdio.h>
// void greet(int n){
//     if (n==0) {
//         return;
//     }
//     printf("Good Morning\n");
//     greet(n-1);
// }
 int show(int *a, int *b){
    *a = 40;
    *b = 60;
    return 0;
 }
int main(){
     int x = 70, y = 80;
     show(&x,&y);
     printf("The data is : x = %d y = %d",x,y);
     return 0;
}