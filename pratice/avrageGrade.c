#include<stdio.h>
int main(){

    int grade1,grade2;
    printf("Enter Mark1 :");
    scanf("%d",&grade1);
    printf("Enter Mark2 :");
    scanf("%d",&grade2);

    float result = (grade1+grade2) / 2;

    printf("The result data : %.2f",result);

    return 0;
}
