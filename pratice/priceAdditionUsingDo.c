
#include<stdio.h>
int main(){
    int price,totalPrice = 0;

    do{
        printf("Enter price for addition or '0' for exist :");
        scanf("%d",&price);
        totalPrice = totalPrice + price;
    }
    while(price>0);

    printf("The total Result : %d",totalPrice);

    return 0;

}
