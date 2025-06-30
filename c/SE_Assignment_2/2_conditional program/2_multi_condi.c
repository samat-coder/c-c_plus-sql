#include<stdio.h>
int main(){

    int m,n;

    printf("enter the value for m: ");
    scanf("%d",&m);

    if (m>0)
    {
        n=1;
    }
    else if (m==0)
    {
        n=0;
    }
    else
    {
        n=-1;
    }
    
    printf("value of n is %d",n);


}