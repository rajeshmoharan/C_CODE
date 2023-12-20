#include<stdio.h>
int digitOfNumber(int no){
    if (no <= 9){
        return no;
    }
    return no % 10 + digitOfNumber(no/10);
}
int main(){
    int no;
    printf("Enter your no :");
    scanf("%d",&no);
    printf("The result is : %d",digitOfNumber(no));
    return 0;
}