#include<stdio.h>
int main(){

    int day;

    printf("enter 1 for display the week days");
    scanf("%d",&day);

    switch (day)
    {
    case 1:
    printf("\nmonday");
    printf("\ntuesday");
    printf("\nwednesday");
    printf("\nthursday");
    printf("\nfriday");
    printf("\nsaturday");
    printf("\nsunday");
            break;
    
    default:printf("enter one for display the week day");
        break;
    }

}