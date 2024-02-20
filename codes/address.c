#include<stdio.h>
int main(){
    char st1[5] = "BCA";
    for (int i=0; i<5; i++){
        if (st1[i] =='\0'){
            break;
        }
        else{
            printf("%d\n",st1[i]);   
        }
    }
    return 0;
}