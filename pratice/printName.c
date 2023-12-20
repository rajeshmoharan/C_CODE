#include<stdio.h>
int main(){
        char fullName[] = "Rajesh Moharana";
        int i = 0;
        while(fullName[i] != '\0'){
            printf("%c",fullName[i]);
            i++;
        }

        return 0;
}
