#include <stdio.h>       
#include <errno.h>       
#include <string.h> 
 
int main(){
    FILE *fp;                           
    fp = fopen("test.txt","r");
    if(fp==NULL){                       
        printf("Value of errno: %d",errno);
        printf("\nError Message: %s",strerror(errno));
        perror("\nMessage from perror");
    }
    else{
        int num;
        fscanf(fp,"%d",&num);            
        printf("File Data: %d",num);
        fclose(fp); 
    }
    return 0;
}
