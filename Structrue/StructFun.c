#include<stdio.h>
#include<string.h>

// passing structure to a function by value

struct Student {
    int roll;
    char name[50];
    int marks;
};
// function definationa and declaration
void PrintData (struct Student st){
    printf("%d %s %d" ,st.roll,st.name,st.marks);
}
int main(){

    // struct varibale create
    struct Student st;
    printf("Enter roll no :\n");
    scanf("%d",&st.roll);
    printf("Enter name:\n");
    scanf("%s",&st.name);
    printf("Enter Makrs\n");
    scanf("%d",&st.marks);

    // function call
    PrintData(st);


    return 0;
}
