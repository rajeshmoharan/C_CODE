#include<stdio.h>
#define size 5
int main(){
    int num[size];
    int flag = 2;

    for (int i=0; i<size; i++){
        printf("Enter array Element and Find Sorted or not sorted :");
        scanf("%d",&num[i]);
    }

    for (int i=1; i<size; i++){
        if (num[i-1] > num[i]){
            flag = 0;
            break;
        }
        if (num[i-1] == num[i]){
            flag = 1;
        }
    }

    if (flag == 0){
        printf("The Array is not sorted");
    }
    else if(flag == 1){
        printf("The array is sorted");
    }
    else if(flag == 2){
        printf("The Array is Really Sorted");
    }
}
