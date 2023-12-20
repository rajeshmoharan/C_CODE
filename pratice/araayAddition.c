#include<stdio.h>
#define size 3
int main(){
  // int grades[SIZE];
  /* int i;
   int lowest_grade;

   for (int i=0; i<5; i++){
    printf("Enter Grades : %d  \n",i);
    scanf("%d",&grades[i]);
   }
   lowest_grade = grades[0];

   for (int i=0; i<5; i++){
    if (lowest_grade > grades[i]){
        lowest_grade = grades[i];
    }
   }

    printf("The lowest grade : %d",lowest_grade);*/

    /*for (int i=0; i<10; i++){
        printf("Enter value");
        scanf("%d",&grades[i]);
   }*/

    /* int markArr[] =  {10,20,30,40,50,60,70};
    for (int i=0; i<=7; i++){
        printf("%d",markArr[i]);
    } */

    int markArr[size];
    for (int i=0; i<size; i++){
        printf("Enter Number");
        scanf("%d",&markArr[i]);
    }

    return 0;
}
