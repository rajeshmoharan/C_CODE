
#include<stdio.h>
#include<string.h>
 
union Studen{
    int id;
    char name[20];
};
int main(){
    union Studen st ;
    st.id = 10;
    // strcpy(st.name,"rajesh");
    printf("%d\n %s",st.id,st.name);
    return 0;
}