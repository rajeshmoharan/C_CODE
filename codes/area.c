#include<stdio.h>
#include<math.h>

void fun(int x){
    if (x>0){ //base condtion
        printf("%d",x);
        fun(x-1); //recursion call
    }
}



int main(){
    int x = 3;
    fun(x);
    return 0;
}