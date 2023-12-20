#include<stdio.h>
#include<stdlib.h>
int main(){
    int n,*ptr;
    printf("Enter no of Element: ");
    scanf("%d",&n);
    ptr = (int*)malloc(n*sizeof(int));
    for (int i=0; i<n; i++){
        scanf("%d",ptr+i);
    }
    printf("____Elements_____\n");
    for (int i=0; i<n; i++){
        printf("%d\n",*(ptr+i));
    }
    return 0;
}