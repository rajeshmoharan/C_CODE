#include<stdio.h>
void isEven(int a){
    if (a %2 == 0){
        printf("Number is Even %d",a);
    }
    else{
        printf("Number is Odd %d",a);
    }
}

int main(){
    int num,result;
    printf("Enter a Number to Check is Even or Odd :");
    scanf("%d",&num);
    for (int i=1; i<num; i++){
        isEven(i);
    }
    return 0;
}