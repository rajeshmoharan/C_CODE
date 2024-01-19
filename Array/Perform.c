#include<stdio.h>
void EvenFind(int arr[]);
// void OddFind(int arr[]);
int main(){
    int arr[10]={10,11,220,35,58,89,80,75,50,90};
    printf("Input Number to Perform Following Operation");
    printf("1-Even Find\n");
    printf("2-Odd Find\n");
    printf("3-Sum and Avrage\n");1
    int c;
    scanf("%d",&c);
    switch(c){
        case 1 : EvenFind(arr);
                break;
        // case 2 : OddFind(arr);
                // break;
        default : printf("Invalid Input.....");
                    break;
    }
    return 0;
}

void EvenFind(int arr[]){
    for (int i=0; i<=10;i++){
        if (arr[i] % 2 == 0){
            printf("Even %d\n",arr[i]);
        }
        else{
            printf("Odd %d\n",arr[i]);
        }
    }
}