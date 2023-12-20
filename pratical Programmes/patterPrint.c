#include<stdio.h>
int main(){
    int no;
    printf("Enter no to Print Trangle0");
    scanf("%d",&no);
    for (int i=0; i<=no; i++){
        for (int j=0; j<i; j++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}