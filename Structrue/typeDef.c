// #include<stdio.h>

// int main(){
//     typedef int grade;

//     grade math = 50;
//     grade physics = 80;

//     printf("%d %d",math,physics);
//     return 0;
// }

#include<stdio.h>

int main(){
    int n;
    printf("Enter number to reverse a number :");
    scanf("%d",&n);
    int r = 0;
    while (n>0)
    {
        r = r *10;
        r = r + (n % 10);
        n = n/ 10;
    }
    printf("The Reverse number is : %d",r);
    return 0;
    
}