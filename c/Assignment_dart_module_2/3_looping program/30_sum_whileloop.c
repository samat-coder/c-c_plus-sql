#include<stdio.h>
int main(){

    int num,i=1,sum=0;

    printf("enter the number you want to up to addition: ");
    scanf("%d",&num);

    while (i<=num)
    {
       sum=sum+i;
       i++;
    }
    printf("the sum of 1 to %d: %d",num,sum);

}