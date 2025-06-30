#include<stdio.h>
int main(){

    int month,day;

    printf("enter the month: ");
    scanf("%d",&month);

    if(month==1 || month==3 || month==5 || month==7 || month==8 || month==10 || month==12){
        printf("\n\t\tthis month has 31 days.");
    }
    else if (month==2 || month==4 || month==6 || month==9 || month==11)
    {
        printf("\n\t\tthis month has 30 days.");
    }
    else
    {
        printf("please enter the valid month number 1 to 12");
    }
    

}