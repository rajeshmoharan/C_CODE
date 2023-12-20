#include<stdio.h>
int main(){
    int price,totalPrice=0;

    printf("Enter price for addition :");
    scanf("%d",&price);

    while(price > 0){
        totalPrice = totalPrice + price;
        printf(" Enter price for addition or '0' for exist : ");
        scanf("%d",&price);
    }
    printf("The total Result is : %d",totalPrice);
    return 0;

}
