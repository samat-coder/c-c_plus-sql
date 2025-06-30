#include<stdio.h>
int main(){

    int min,second,hour,remainingminutes;

    printf("enter the minutes: ");
    scanf("%d",&min);

    second=min*60;
    hour=min/60;
    remainingminutes=min % 60;

    printf("minutes are %d\n seconds are %d\n hours are %d\n and remaining minutes are %d",min,second,hour,remainingminutes);
}