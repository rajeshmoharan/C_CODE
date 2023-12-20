#include<stdio.h>
#include<stdlib.h>
int main(){
    int n, *pt;
    printf("Enter array element no :");
    scanf("%d",&n);
    pt = (int*)calloc(n,sizeof(int));
    for (int i=0; i<n; i++){
        printf("%d\n",*(pt+i));
    }
    free(pt);
    return 0;
}