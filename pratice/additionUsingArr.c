#include<stdio.h>
#define size 5
int main(){
    int markArr[size];
    int result = 0;
    for (int i=0; i<size; i++){
        printf("Enter value for addition :");
        scanf("%d",&markArr[i]);
    }

    for (int i=0; i<size; i++){
        result += markArr[i];
    }

    printf("The result value is : %d",result);

    return 0;
}
