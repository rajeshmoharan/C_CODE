#include<stdio.h>
int main(){
    char name[20];
    char reverse[20];

    printf("Enter name");
    scanf("%s",&name);

    for (int i=0; i<name; i++){
        reverse += name[i];
    }

    printf("%s",reverse);
    return 0;

}
