// array of structure 
// create student structure and assign array

#include<stdio.h>
#include<string.h>

// structure define
// nested struct

struct Student{
    int rollno;
    int age;
    char name[50];
    int c;
    int dl;
};

// main method define
int main(){
    int n;
    printf("Enter no of Student:");
    scanf("%d",&n); //3

    // struct variable create here

    struct Student st[n]; //st is a variable of structure type st[3]

    // message print
    printf("Enter Student Data");

    // loop start
    // 0,1,2,3
    for (int i=0; i<n; i++){
        printf("Enter roll no :\n");
        scanf("%d",&st[i].rollno);  //1

        // age
        // Roll no 1 age 
        printf("Roll no [%d] age:\n",st[i].rollno);
        scanf("%d",&st[i].age);

        // name
        printf("Roll no [%d] name:\n",st[i].rollno);
        scanf("%s",&st[i].name);

        // c mark
        printf("Roll no [%d] C Mark:\n",st[i].rollno);
        scanf("%d",&st[i].c);

        // dl mark
        printf("Roll no [%d] Dl Mark:\n",st[i].rollno);
        scanf("%d",&st[i].dl);

        // print("Next Student Data");
    }

    printf("___________Student Database__________");
    // loop to print the data
    for (int i=0; i<n; i++){
        printf("Student Rollno %d\n Age : %d\n Name:%s\n C Mark:%d\n Dl Mark %d\n",st[i].rollno,st[i].age,st[i].name,st[i].c,st[i].dl);
    }

    return 0;

}

