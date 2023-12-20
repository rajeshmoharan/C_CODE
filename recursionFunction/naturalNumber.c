#include<stdio.h>
int addition(int);
int main(){
    int no;
    printf("Enter no to Find addition :");
    scanf("%d",&no);
    int result = addition(no);
    printf("The result is : %d",result);
    return 0;
}
int addition(int no){
    if (no == 1){ //base condtion
        return 1;
    }
    else{
        int res = no + addition(no -1); // function recursion 
        return res;
    }
}