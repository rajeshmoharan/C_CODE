
#include<stdio.h>
int main(){
    int n;
    printf("Enter array element:");
    scanf("%d",&n);
    int arr[n];
    printf("Enter array element :\n");
    for (int i=0; i<n; i++){
        scanf("%d",&arr[i]);
    }
    // remove the duplicate
     // 0 1 2 3 4
    // 8 8 9 4 5
    for (int i=0; i<n; i++){

        // inner loop
        // 1 2 3 4
        // 8 9 4 5
        for (int j=i+1; j<n; j++){
            // check the condition
            
            if (arr[i] == arr[j]){

                // third for loop
                for (int k=j; k<n; k++){
                    // shift right to left all the element data
                        arr[k]=arr[k+1];
                }
                n--;
                // printf("Before reduce%d\n",j);
                // j--;
                // printf("after reduce %d\n",j);
            }

        }
    }
    for (int i=0; i<n; i++){
        printf("%d",arr[i]);
    }
    return 0;
}