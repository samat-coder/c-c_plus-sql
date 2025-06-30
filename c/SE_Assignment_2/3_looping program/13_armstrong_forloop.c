#include<stdio.h>
#include<math.h>
int main()
{
    int num,remainder,result=0,n=0,i;

    printf("enter the number:");
    scanf("%d",&num);

    
    for (i=num; i!=0; i=i/10)
    {
        n++;
    }

    for (i=num; i!=0; i=i/10)
    {
        remainder=i%10;
        result+=pow(remainder,n);
    }
    if(result==num){
        printf("%d is armstrong number",result);
    }
    else
    {
        printf("%d is not armstrong number",result);
    }
    
    
    
    
    
}