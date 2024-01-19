#include<stdio.h>
#include<string.h>

// Structure Create
struct Mark{
    int c;
    int dl;
    int evs;
    int pom;
};
struct Student{
    int roll;
    char name[50];
    // first structure variable created
    struct Mark m;
};
// functin declaration
void TotalMark(struct Student st);
void StudentData(struct Student st);

// main method
int main(){
    struct Student st;
    StudentData(st);
    TotalMark(st);
    return 0;
}
// function defination
void StudentData(struct Student st){
    printf("Enter Roll no\n");
    scanf("%d",&st.roll);
    printf("Enter Name \n");
    scanf("%s",&st.name);
    printf("Roll no %d\n Name %s\n",st.roll,st.name);
}

// function student
void TotalMark(struct Student st){
    printf("Enter C Mark :\n");
    scanf("%d",&st.m.c);
    printf("Enter Dl Mark :\n");
    scanf("%d",&st.m.dl);
    printf("Enter Evs Mark :\n");
    scanf("%d",&st.m.evs);
    printf("Enter POM Mark :\n");
    scanf("%d",&st.m.pom);

    // total Mark 
    printf("Total Mark %d",st.m.c + st.m.dl + st.m.evs + st.m.pom);
}