#include<stdio.h>
#include<math.h>
int main(){

    double principal,rate,time,compoundinterest,amount;

    printf("\n\tenter your principal: ");
    scanf("%lf",&principal);
    printf("\n\tenter your rate: ");
    scanf("%lf",&rate);
    printf("\n\tenter the time in year: ");
    scanf("%lf",&time);

    amount=principal*((pow((1+rate/100),time)));
    compoundinterest=amount-principal;

    printf("compoundinterest is:%.2lf",compoundinterest);


}