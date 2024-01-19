
#include<stdio.h>
#include<string.h>

struct Student {
    int rollno;
    int age;
    char name[50];
}St[5];

int main(){
    printf("Enter Studnet data :");
    for (int i=0; i<=5; i++){
        printf("Enter roll no & age & name");
        scanf("%d%d%s",&St[i].rollno,&St[i].age,&St[i].name);
    }
    for (int i=0; i<=5; i++){
        printf("Student Roll no %d",St[i].rollno);
        printf("Student Age  %d",St[i].age);
        printf("Student Name  %s",St[i].name);
    }
    return 0;
}