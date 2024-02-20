#include<stdio.h>
#include<string.h>
int main(){
    int count = 0;
    char st[100];
    printf("Enter String:");
    scanf("%s",&st);

    int len = strlen(st);

    for (int i=0; i<len; i++){
        for (int j=i+1; j<len; j++){
            if(st[i] == st[j]){
                count++;
            }
        }
    }

    printf("Duplicate Alphabet occuring : %d",count);

    return 0;

}