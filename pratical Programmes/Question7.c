#include<stdio.h>
#include<string.h>
// function declation
void palindromNumber(); 

// main method
int main(){
    // function call
    palindromNumber();
    return 0;
}

// function defination
void palindromNumber(){
    char st[100];
    int temp;

    printf("Enter string to check palindrom :");
    scanf("%s",&st);  
    int len = strlen(st);

    for (int i=0; i<len/2; i++){
        if (st[i] != st[len-1-i]){
            temp = 1;
            break;
        }
    }

    if (temp == 1){
        printf("Not Palindrom String");
    }
    else{
        printf("Palindrom String");
    }

}