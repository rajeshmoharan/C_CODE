#include<stdio.h>
struct Student{
    int rollno;
    int id;
};
int main(){
    struct Student *p;
    p->rollno = 20;
    p->id = 1;
    printf("Roll no %d and id %d",p->rollno,p->id);
    return 0;
}