#include<stdio.h>
#include<string.h>
int main(){
    // char name1[] = "Rajesh";
    // char name2[10];
    
    //  strcpy(name2,name1);
    //  puts(name2);
    //  printf("%s",name1);

    char name1[50] = "Rajesh ";
    char name2[] = "Moharana";
    char copyName[50];

    strcpy(copyName,name1);   

    strcat(name1,name2);
    printf("%s\n",name1);
    puts(copyName);

    
    

     return 0;
}