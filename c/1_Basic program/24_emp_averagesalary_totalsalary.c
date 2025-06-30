#include<stdio.h>
int main(){

    char emp1[20],emp2[20],emp3[20],emp4[20],emp5[20];
    float salary1,salary2,salary3,salary4,salary5,totalsalary,averagesalary;

    printf("enter the first employee name: ");
    scanf("%s",&emp1);
    printf("enter the second employee name: ");
    scanf("%s",&emp2);
    printf("enter the third employee name: ");
    scanf("%s",&emp3);
    printf("enter the fourth employee name: ");
    scanf("%s",&emp4);
    printf("enter the fifth employee name: ");
    scanf("%s",&emp5);

    printf("enter the first employee salary: ");
    scanf("%f",&salary1);
    printf("enter the first employee salary: ");
    scanf("%f",&salary2);
    printf("enter the first employee salary: ");
    scanf("%f",&salary3);
    printf("enter the first employee salary: ");
    scanf("%f",&salary4);
    printf("enter the first employee salary: ");
    scanf("%f",&salary5);


    totalsalary=salary1+salary2+salary3+salary4+salary5;
    averagesalary=totalsalary/5;

    printf("\n\t\ttotal salary is %.2f",totalsalary);
    printf("\n\t\taverage salary is %.2f",averagesalary);



}