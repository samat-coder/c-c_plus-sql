#include<stdio.h>
int main(){

    int n,power1,power2,power3;

    printf("enter the integer number: ");
    scanf("%d",&n);

    power1=n;
    power2=n*n;
    power3=n*n*n;

    printf("\npower first is %d",power1);
    printf("\npower second is %d",power2);
    printf("\npower third is %d",power3);

}