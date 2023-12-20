#include<stdio.h>
int main(){
    int mark,totalMark=0,count = 0;
    do{
        printf("Enter Mark OR 0 to exist :");
        scanf("%d",&mark);
        totalMark = totalMark + mark;
        count ++;
    }
    while(mark != 0);
    count = count -1;
    printf("The Avrage Mark is : %f",(float)totalMark/count);
    return 0;
}