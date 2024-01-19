#include <stdio.h>
#include <string.h>
struct StudentMark
{
    int rollno;
    char name[20];
    int C;
    // int Dl;
    // int Evs;
    // int Pom;
};

int main()
{
    int n;
    printf("Enter Number of Studnet :");
    scanf("%d", &n);
    struct StudentMark st[n];

    // printf("%d",sizeof(st));

    printf("Enter %d the Student Details:\n", n);

    printf("Enter roll no & Name & Marks C,Dl,Evs,Pom");


    // loop to enter all student
    for (int i = 0; i < n; i++)
    {
        scanf("%d %s %d %d %d %d", &st[i].rollno, &st[i].name, &st[i].C, &st[i].Dl, &st[i].Evs, &st[i].Pom);
        printf("Enter roll no:\n");
        scanf("%d",&st[i].rollno);
        printf("Enter Name of Roll no [%d]\n",st[i].rollno);
        scanf("%s",&st[i].name);
        printf("Roll [%d] C Mark\n",st[i].rollno);
        scanf("%d",&st[i].C);
        printf("Next Student Data\n");
    }

    printf("_______________Student Mark Database________________________\n");
    // print all student data and Mark
    for (int i = 0; i < n; i++)
    {
        printf("Roll no %d\n Name : %s\n C Mark %d\n Dl Mark %d\n EVS Mark %d\n POM Mark %d\n", st[i].rollno,st[i].name, st[i].C, st[i].Dl, st[i].Evs, st[i].Pom);
    }

    return 0;
}