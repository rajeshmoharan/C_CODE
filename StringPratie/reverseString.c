#include<stdio.h>
#include<string.h>
int main(){
    char oriName[] = "Rajesh Moharana";
    char copyName[50];

    for (int i=strlen(oriName); i>0; i--){
            copyName[] += oriName[i];
    }
    printf("%s",copyName);
    return 0;
}