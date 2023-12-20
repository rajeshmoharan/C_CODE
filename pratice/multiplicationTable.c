#include<stdio.h>
int main(){
        int num,result = 0;
        printf("Enter any number for multiplication :");
        scanf("%d",&num);
        for(int i=1; i<=10; i++){

            result = i * num;
            printf("%d * %d = %d \n  ",i,num,result);
        }
        printf("%d",result);
        return 0;

}
