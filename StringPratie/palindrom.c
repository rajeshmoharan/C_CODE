#include<stdio.h>
#include<string.h>
#include<conio.h>
int main(){
    // Palindrom find
    char str[4] = "STS";
    char str2[4] ;
    scanf("%s",str2);
    strrev(str2);
    if (str==str2){
        printf("Palindrom Number");
    }
    else{
        printf("Not Palindrom Number");
    }


    return 0;
}