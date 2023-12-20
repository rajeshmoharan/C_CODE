#include<stdio.h>
#include<string.h>
int main(){
    char st[20];
    int count = 0;
    printf("Enter sentence 20 character :");
    gets(st);
    for (int i=0; i<=strlen(st); i++){
        if (st[i] == ' '){
            count++;
        }
    }
    count ++;
    printf("The Word is : %d",count);
    return 0;
}