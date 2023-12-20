#include<stdio.h>
int factorailFind(int);
int main(){
    int no;
    printf("Enter no to Find Factorail :");
    scanf("%d",&no);
    int result = factorailFind(no);
    printf("The Result is : %d",result);
    return 0;
}
int factorailFind(int a){
   int res ;
   if (a <= 1){   // base condition
        return 1;
   }
    else{
        res = a * factorailFind(a-1); //fucntion recursion call
        return res;
    }
   
}