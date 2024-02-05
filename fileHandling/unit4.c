#include<stdio.h>
int main(){
    FILE *f = fopen("bcaDept.txt","r");
    char myChar;
    int count = 0;

    if (f!= NULL){
       while ((myChar =  fgetc(f)) != EOF)
       {
            printf("%c",myChar);
            if (myChar == '\n'){
                count ++;
            }
       }
       printf("Letter : %d",count);
    }
    return 0;
}