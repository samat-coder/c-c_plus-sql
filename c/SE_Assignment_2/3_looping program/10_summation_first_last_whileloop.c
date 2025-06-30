#include<stdio.h>
int main(){

    int num,sum=0,first_digit,last_digit;

    printf("enter the number you want to sum: ");
    scanf("%d",&num);

    last_digit=num%10;
    while (num>=10)
    {
        num=num/10;
    }
    first_digit=num;
    printf("%d + %d = %d",first_digit,last_digit,sum=first_digit+last_digit);
    



}