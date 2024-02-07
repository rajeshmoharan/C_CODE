#include<stdio.h>
#include<string.h>
#include<errno.h>
#include<stdlib.h>
int main(){
    FILE *f;
    f = fopen("bcaRead.txt","r");
    if (f==NULL){
     perror("Error Message:");   
     exit(1);
    }
    else{
        printf("File Found Now Operation Perform");
    }
    return 0;
}