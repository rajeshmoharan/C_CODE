#include<stdio.h>
int main(){
    int n ;
    int arr[n];
    printf("Enter the size");
    scanf("%d",&n);
    for (int i =0; i<n; i++){
        scanf("%d",&arr[i]);
    }
    for (int i=0; i<n; i++){
        printf("%d",arr[i]);
    }

    return 0;
}