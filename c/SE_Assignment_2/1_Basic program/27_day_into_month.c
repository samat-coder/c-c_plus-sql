#include<stdio.h>
int main(){

    int day,month;
    float remainingday;

    printf("enter the day: ");
    scanf("%d",&day);

    month=day/30;
    remainingday=day % 30;

    printf("days are %d months are %d and remaining days are %f",day,month,remainingday);
}