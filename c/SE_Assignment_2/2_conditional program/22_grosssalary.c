#include<stdio.h>
int main(){

    int salary,hra,da,gross_salary;

    printf("enter the salary: ");
    scanf("%d",&salary);

    if (salary<=10000)
    {
        hra=salary*0.20;
        da=salary*0.80;
    }
    else if (salary<=20000)
    {
        hra=salary*0.25;
        da=salary*0.90;
    }
    else
    {
        hra=salary*0.30;
        da=salary*0.95;
    }

    gross_salary=salary+hra+da;

    printf("\n\t\tgross salary is %d");



}