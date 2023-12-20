#include<stdio.h>
#include<stdlib.h>
int main(){

    double height,width;
    printf("Enter Height : ");
    scanf("%lf",&height);
    printf("Enter Width : ");
    scanf("%lf",&width);
    printf("The area is : %lf",height * width);
    getch();
    return 0;
}
