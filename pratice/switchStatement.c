#include<stdio.h>
int main(){
    char num;
    printf("Enter any number to print");
    scanf("%c",&num);

    switch(num){
        case 1 : printf("January Month");
                   break;
        case 2 : printf("Febuary Month");
                   break;
        default : printf("Enter a valid month number");
    }
    return 0;
}
