#include<stdio.h>
int main(){
    for (int i=1;i<3;i++){
        for (int j=0; j<i; j++){
            printf("%d",j);
        }
    }
    return 0;
}