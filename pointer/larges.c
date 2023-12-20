#include<stdio.h>
int main(){
    int no1,no2,no3;
    printf("enter 3");
    scanf("%d%d%d",&no1,&no2,&no3);
    if(no1>no2){
        if (no1>no3){
            printf("No1 is Largest %d",no1);
        }
    }
    else if (no2>no1)
    {
            if(no2>no3){
                printf("No2 LARGET %d",no2);
            }
    }
    else{
        printf("No3 Largest %d",no3);
    }
    return 0;
    
}