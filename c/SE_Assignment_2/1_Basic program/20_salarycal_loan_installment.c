#include<stdio.h>
int main(){

    float salary,premium,loaninstallment,finalsalary;
    
    printf("\n\tenter your monthly salary:");
    scanf("%f",&salary);

    premium=salary*0.8;
    loaninstallment=salary*0.7;
    finalsalary=salary-(premium+loaninstallment);

    printf("final salary is %.2f",finalsalary);


}