#include<stdio.h>
int main(){
    int arr[] ={4,4,3,2,7,2,1};
    int i,j,k,temp,n=7;
    // 0,//1,2,3,4,5,6
    // 4,//4,3,2,7,2,4
    for (i=0; i<n; i++){
    //index- 0,1,2,3,4,5,6
    //value- 4,4,3,2,7,2,4 
        // printf("Outer loop %d\n",arr[i]);
        for (j=i+1; j<n; j++){
        // index-1
        // value-4
        // printf("Inner loop %d\n",arr[j]);
            if (arr[i] == arr[j]){
            //index- 1
            //value- 4
            // printf("Condition meet %d %d\n",arr[i],arr[j]);
                for (k=j;k<n;k++){
                    // 0 1 2 3 4 5
                    // 4 3 2 7 2 1
            //index - 1 
            // value - 4
                // printf("Third before Index %d\n",k);
                // printf("Third before value %d\n",arr[k]);
                    arr[k] = arr[k+1];

                    // printf("Third after index  : %d\n",k); 
                    // printf("Third after value :%d\n",arr[k]);
                    }
                n--;
                j--;
            }
        }
    }

    for (int i=0; i<n; i++){
        printf("%d",arr[i]);
    }
}