#include<stdio.h>
int main(){
    int num,pow;
    int result = 1;
    printf("Enter number :");
    scanf("%d",&num);
    printf("Enter Power :");
    scanf("%d",&pow);

    for (int i=1; i<=pow; i++){
        result = result * num;
    }

    printf("%d in the  power",result);
    return 0;
}
