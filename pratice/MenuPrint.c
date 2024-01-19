
#include<stdio.h>
void even(); //function declaration
void odd();
int main(){
    int n;
    char ch;
    do
    {
        printf("______Menu_______\n");
        printf("Press 1 to Even\n");
        printf("Press 2 to Find Odd");
        scanf("%d",&n);
        switch(n){
            case 1 : even();
                    break;
            case 2 : odd();
                    break;

            default : printf("Invalid Input");
                    break;
        }
        printf("\nDo you want to continue (y/n)");
        scanf("%s",&ch);  //y
    } while (ch == 'y' || ch == 'Y');
    
    return 0;
}

// even function defination

void even(){
    int s;
    printf("Enter array element no");
    scanf("%d",&s);

    // array create here
    int arr[s];

    // insert array data
    for (int i=0; i<s; i++){
        printf("Enter array element");
        scanf("%d",&arr[i]);
    }

    // print array
    // for (int i=0; i<s; i++){
    //     printf("%d\n",arr[i]);
    // }

    // logic of even
    for (int i=0; i<s; i++){
        if (arr[i] % 2 == 0){
            printf("Even nos are \n");
            printf("%d\n",arr[i]);
        }
    }



}
void odd(){
    
}