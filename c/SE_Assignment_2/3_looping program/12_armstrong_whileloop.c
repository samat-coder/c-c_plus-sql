#include<stdio.h>
#include<math.h>
int main()
{
    int num,original_num,remainder,result=0,n=0;

    printf("enter the number:");
    scanf("%d",&num);

    original_num=num;

    while (original_num!=0)
    {
        original_num=original_num/10;
        n++;
    }

    original_num=num;

    while (original_num!=0)
    {
        remainder=original_num%10;
        result+=pow(remainder,n);
        original_num=original_num/10;
    }

    if (result==num)
    {
        printf("\n\t%d is armstrong number",result);
    }
    else
    {
        printf("\n\t%d is not armstrong number",result);
    }
    
    
        

    
}