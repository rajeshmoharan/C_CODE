#include<stdio.h>
#include<stdlib.h>
int main(){
    // ele dynamic memory alloc sum and avg
    int n, sum = 0 ;

    printf("Enter element number : ");
    scanf("%d",&n); //3

    // dynamic memory allocation done here
    // datatype pointer_variabel = (typecast)malloc(sizeof);

    int *p =(int*)malloc(n*sizeof(int));

    if (p == NULL){
        printf("Memory Allocatin Failed!!!!!! try again");
    }
    else{
        // loop for user input
        for (int i=0; i<n; i++){
            printf("Enter first element :");
            scanf("%d",&p[i]);
        }
        // loop to access all the element in dynamic memory location
                                  // 0   1   2
        for (int i=0; i<n; i++){  //10,20,30
            sum += p[i];
        }
        printf("sum is : %d\n",sum);
        printf("Avrage is : %.2f",(float)sum/ n );
        free(p);  
    }

    return 0;

}