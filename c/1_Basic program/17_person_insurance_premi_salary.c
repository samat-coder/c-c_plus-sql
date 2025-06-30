#include<stdio.h>
int main(){

    int salary,premium;

    printf("\n\tenter your salary: ");
    scanf("%d",&salary);

    if(salary<30000)
    {
        premium=salary*0.5;
    }
    else if(salary>30000 && salary<60000)
    {
        premium=salary*0.6;
    }
    else
    {
        premium=salary*0.7;
    }

    printf("\n\tyour salary is %d",salary);
    printf("\n\tyour premium is %d",premium);

}