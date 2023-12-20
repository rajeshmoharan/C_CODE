#include<stdio.h>
#include<string.h>
int main(){
    char name[] = "BCA";
    // int i = 0;
    // while (name[i] != '\0')
    // {
    //     /* code */
    //     printf("%c",name[i]);
    //     i++;
    // }
    int len = strlen(name);
    for (int i=0; i<len; i++){
        printf("%c\n",name[i]);
    }
    printf("%d",len);
    
    return 0;
}