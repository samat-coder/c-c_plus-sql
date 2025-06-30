#include<stdio.h>
int main(){

    int user,i=1,fact=1;

    printf("enter the number you want to receive the factorial: ");
    scanf("%d",&user);

    while (i<=user)
    {
        fact=fact*i;
        i++;
    }
    printf("%d factorial is %d",user,fact);

}