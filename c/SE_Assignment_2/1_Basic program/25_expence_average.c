#include<stdio.h>
int main(){

   
    float expense1,expense2,expense3,expense4,expense5,totalexpense,averageexpense;

    printf("enter the first expense: ");
    scanf("%f",&expense1);
    printf("enter the second expense: ");
    scanf("%f",&expense2);
    printf("enter the third expense: ");
    scanf("%f",&expense3);
    printf("enter the fourth expense: ");
    scanf("%f",&expense4);
    printf("enter the fifth expense: ");
    scanf("%f",&expense5);


    totalexpense=expense1+expense2+expense3+expense4+expense5;
    averageexpense=totalexpense/5;

    printf("\n\t\ttotal salary is %.2f",totalexpense);
    printf("\n\t\taverage salary is %.2f",averageexpense);



}