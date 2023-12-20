#include<stdio.h>
#include<string.h>
int main(){
    char str[20] = "I am BCA Student";
    int count = 0;
    for (int i=0; i<=strlen(str); i++){
        if(str[i]==' '){
            count ++;
        }
    }
        count ++;
    printf("The Word is : %d",count);
    return 0;
}