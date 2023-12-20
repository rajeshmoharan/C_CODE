#include<stdio.h>
int main(){
    int markArr[2][3] = {{1,2,3},{4,5,6}};
    for (int i=0; i<2; i++){
        for(int j=0; j<=2; j++){
            printf("%d",markArr[i][j]);
        }
        printf("\n");
    }
    return 0;
}
