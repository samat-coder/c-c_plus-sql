#include<stdio.h>
int main(){

    int i=1,num,original,reversed,remainder;
    while (i<=3)
    {
        printf("enter the number you want to check palidrone number or not: ");
        scanf("%d",&num);

        original=num;
        reversed=0;

        while (num!=0)
        {
            remainder=num%10;
            reversed=reversed*10+remainder;
            num=num/10;
        }

        if(original==reversed){
            printf("%d is palidrone number\n",original);
        }else{
            printf("%d is not palidrone number\n",original);
        }
        i++;
    }
    
}