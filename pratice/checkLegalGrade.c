#include<stdio.h>
int main(){
    int grade;
    printf("Enter grade 0 to 100 : ");
    scanf("%d",&grade);
    while(grade < 0 || grade > 100){
        printf("Enter grade 0 to 100 : ");
        scanf("%d",&grade);
    }
    printf("Thank You ! %d is legal grade",grade);
    return 0;
}
