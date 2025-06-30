#include<stdio.h>
int main(){

    int user,i=1,fact,j;

    while (i<=5)
    {
        printf("enter the value you want to receive factorial: ");
        scanf("%d",&user);

        fact=1;
        j=user;
        while (j>0)
        {
            fact=fact*j;
            j--;
        }
        printf("\n\t%d factorial is %d\n",user,fact);
        i++;
    }
    

}