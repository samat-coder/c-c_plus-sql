#include<stdio.h>
int main(){

    int num,sum=0,digit;

    printf("enter the number you want to sum: ");
    scanf("%d",&num);

    while (num>0)
    {
        digit=num%10;
        sum+=digit;
        num=num/10;
    }
    printf("sum of given number is: %d",sum);
    

}