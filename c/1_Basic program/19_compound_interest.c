#include<stdio.h>
#include<math.h>
int main(){

    double principal=10000,rate=5,time=2,amount,compoundinterest;

    amount=principal*((pow((1+rate/100),time)));
    compoundinterest=amount-principal;

    printf("\n\tprincipal: %lf",principal);
    printf("\n\trate: %lf",rate);
    printf("\n\ttime: %lf",time);
    printf("\n\t\tcompound interest is %0.5lf",compoundinterest);
    

}