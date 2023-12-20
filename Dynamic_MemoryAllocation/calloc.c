#include<stdio.h>
#include<stdlib.h>
int main(){
    int n, *pt;
    printf("Enter element no :");
    scanf("%d",&n);
    pt=(int*)calloc(n,sizeof(int));

    //print the value 
    for (int i=0; i<n; i++){
        // scanf("%d\n",pt+i)); //13310216+1*4
        scanf("%d",pt+i);
    }
    printf("___Values____\n");
    for (int i=0; i<n; i++){
        printf("%d\n",pt+i);
    }
    free(pt);
    return 0;
}