#include<stdio.h>
int main(){
    int no,product=1, sum = 0,temp;
    printf("Enter no");
    scanf("%d",&no);
    while (no != 0)
    {
        temp = no % 10;
        sum += temp;
        product *= temp;
        no = no / 10; 
    }
    
    printf("The sum of digit : %d\n",sum);
    printf("The product of digit : %d",product);
    
    return 0;
    
}