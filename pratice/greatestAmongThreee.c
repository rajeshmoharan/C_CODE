
#include<stdio.h>
int main(){

    int a,b,c;

    printf("Enter three number to check highest number");
    scanf("%d %d %d",&a,&b,&c);

    if(a>b && b>c){
        printf("%d is highest number",a);
    }
    else if (b>c && c>a){
        printf("%d is highest number",b);
    }
    else{
        printf("%d is highest number",c);
    }
    return 0;
}
