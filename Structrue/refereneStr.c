
#include<stdio.h>
#include<string.h>

struct Student {
    int roll;
    char name[50];
};

void showData();

int main(){
    struct Student st;
    printf("Enter roll no");
    scanf("%d",&st.roll);
    showData(st);

    printf("-----main method strucutre-------");
    printf("%d",st.roll);
    return 0;
}

void showData(struct Student st){
    st.roll = 2;
    printf("Enter student Name:");
    scanf("%s",&st.name);
    
    // print all the data
    printf("Roll no %d\n Name %s\n",st.roll,st.name);
}