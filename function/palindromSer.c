#include<stdio.h>
#include<string.h>
int palindromStringCheck(); //declaration of function

int main(){
    // function call
    palindromStringCheck();

    return 0;
}
// function defination
int palindromStringCheck(){
    char st[100],tmp;

    printf("Enter String to check Palindrom:");
    scanf("%s",&st); 

    int len = strlen(st)-1;

    for (int i=0; i<len/2; i++){
        
        if (st[i] != st[len-i]){
            tmp = 1; 
            break;
        }
    }

    if (tmp == 1){
        printf("Not Palindrom");
    }
    else{
        printf("Palindrom");
    }

    return 0;
}