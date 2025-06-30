#include<stdio.h>
int main(){

    int user,i=1,sum=0;

    printf("enter the number you want to up to addition: ");
    scanf("%d",&user);

    while (i<=user)
    {
        sum=sum+i;
        i++;
    }
    printf("total is: %d",sum);
    

}