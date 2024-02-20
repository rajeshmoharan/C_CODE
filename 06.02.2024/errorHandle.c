#include<stdio.h>
#include<errno.h>
#include<string.h>
#include<stdlib.h>

int main(){
    FILE *f = fopen("bba.txt","r");
  
    if (f== NULL){
       perror("error");
        exit(-1);
    }
    else{
        printf("..File Opened..");
    }

    printf("Rajdhani College");
    return 0;
}