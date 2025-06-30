#include<stdio.h>
int main(){

    int monthlysalary,annualsalary;

    printf("\n\tenter your monthly salary: ");
    scanf("%d",&monthlysalary);

    annualsalary=monthlysalary*12;

    printf("\n\t\tannual salary is %d",annualsalary);

}