#include<stdio.h>
#include<string.h>
#include<unistd.h>
int main(){
    // char name[20]="rajesh";
    // strupr(name);
    // puts(name);
    // return 0;
    pid_t pid,p;
    p=fork();
    pid=getpid();
    if(p<0){
        fprintf(stderr, "Fork Failed");
        return 1;
    }
    printf("Output of fork id : %d\n",p);
    printf("Process id is : %d\n",pid);
    return 0;
}