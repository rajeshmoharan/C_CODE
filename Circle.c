#include <stdio.h>
#define pi 3.14
float area();
float circleCicum();
int main()
{
    int r = 5;
    printf("Enter radius of circle:");
    float result = area(r);
    float circum = circleCicum(r);
    printf("Area is : %.2f", result);
    printf("Circumference : %.2f",circum);
    return 0;
}
float area(int r)
{
    return pi * r * r;
}
float circleCicum(int r){
    return 2 * pi * r;
}