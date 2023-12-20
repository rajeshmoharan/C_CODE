#include<stdio.h>
int main(){
    // auto int a = 20;
    // printf("%d",a);
    // return 0;
	int a = 8;
	int b = a++ + ++ a + --a + a-- + a;
	printf("The result is : %d %d",a,b);
	return 0;

}