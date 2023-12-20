#include<stdio.h>
int main(){
    int number[6] = {2,5,50,1,20,40};
    int largestN = number[0];

    for(int i=0; i<6; i++){
        if(largestN < number[i]){
            largestN = number[i];
        }
    }
    printf("The Largest Number is : %d",largestN);
    return 0;
}
