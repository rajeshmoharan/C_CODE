#include<stdio.h>
#include<conio.h>

void findMaxNumber(int num1,int num2){
    if (num1 > num2){
        printf("The LargestNumber is : %d\n",num1);
        printf("The SmallestNumber is : %d",num2);
    }
    else{
        printf("The LargestNumber is : %d\n",num2);
        printf("The SmallestNumber is : %d",num1);
    }
}
int main(){
    int a,b;
    printf("Enter Two Number to Find LargestNumber");
    scanf("%d %d",&a,&b);
    findMaxNumber(a,b);
    return 0;
}