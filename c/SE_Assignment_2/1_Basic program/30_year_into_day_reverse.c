#include<stdio.h>
int main(){

    int year,day;

    printf("enter the year: ");
    scanf("%d",&year);
    
    day=year*365;
    printf("days are %d",day);

    int inputday;
    int convertyear;
    printf("\nenter the day: ");
    scanf("%d",&inputday);

    convertyear=inputday/365;
    printf("inputdays are %d\n and years is%d",inputday,convertyear);



}