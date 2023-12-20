#include<stdio.h>
#include<string.h>
int main(){
    char str[20] = "Rajesh Moharana";
    char copyStr[50];
    int len = strlen(str);
    // printf("The Length of the String is : %d",len);

    strcpy(copyStr,str);
    printf("%s",copyStr);
    return 0;
}