#include<stdio.h>
#include<stdlib.h>
int main(){

    float height,width;
    printf("Enter Height");
    scanf("%f",&height);

    printf("Enter width");
    scanf("%f",&width);

    float perimeter = 2*(height * width);

    printf("The Perimeter area is : %f",perimeter);
}
