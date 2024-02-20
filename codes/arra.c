#include<stdio.h>

struct Student{
    int id;
    char name[20];
};

int main(){
    struct Student s1, *p;
    p = &s1;
    p->id = 20;

    printf("%d",p->id);


    return 0;
}