#include<stdio.h>
#include<string.h>
int main(){
    char String[30];
    int count = 0;

    printf("Enter sentence to count word : ");
    gets(String);

    for (int i=0; i<strlen(String); i++){
        if (String[i] == ' '){
            count ++;
        }
    }
    count ++;

    printf("The Words %d",count);

    return 0;

}