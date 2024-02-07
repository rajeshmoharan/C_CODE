#include<stdio.h>
#include<errno.h>
#include<stdlib.h>

int main(){
    FILE *f;
    f = fopen("output_bca.txt","r");

    if (f == NULL){
        perror("Error Message:");
        exit(EXIT_FAILURE);
    }

    printf("Good");

    return 0;
}