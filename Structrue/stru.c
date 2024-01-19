#include<stdio.h>
#include<string.h>
struct Employee{
    int id;
    char name[20];
    int salary;
}r;

int main(){
    
    printf("Enter Employee data :");
    scanf("%d",&r.id);
    scanf("%s",&r.name);
    scanf("%d",&r.salary);

    printf("Employee id :%d\n",r.id);
    printf("Employe Name:%s\n",r.name);
    printf("Employee salary :%d\n",r.salary);


    return 0;
}
