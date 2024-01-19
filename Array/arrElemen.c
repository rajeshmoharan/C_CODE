#include<stdio.h>
int main(){
    int size;
    printf("Enter array size:");
    scanf("%d",&size);
    int arr[size];
    for (int i=0; i<=size;i++){
        printf("Enter array element");
        scanf("%d",&arr[i]);

    }
    for (int i=0; i<=size;i++){
        if (arr[i]%2==0){
            printf("Even %d\n",arr[i]);
        }
        else{
            printf("Odd %d\n",arr[i]);
        }
    }
    return 0;
}