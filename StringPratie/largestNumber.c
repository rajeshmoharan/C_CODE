#include<stdio.h>
int main(){
    int a=10, b=20, c=30;
    if (a>b && a>c){
        printf("Largest no: %d",a);
    }
    else if (b>a && b>c)
    {
        printf("Largest no: %d",b);
    }
    else{
        printf("Largest no: %d",c);
    }
    return 0; 
}