#include<stdio.h>
int main(){

    int year,month,day,remainingday;

    printf("enter the year: ");
    scanf("%d",&year);

    day=year*365;
    month=day/30;
    remainingday=day%30;

    printf("years is %d\n months is %d\n day is%d\n and remaining days are%d",year,month,day,remainingday);


}