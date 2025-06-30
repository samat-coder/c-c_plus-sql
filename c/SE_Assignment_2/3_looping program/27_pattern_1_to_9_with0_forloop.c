#include<stdio.h>
int main(){

    int user,i=1;

    printf("enter the number you want to up to print: ");
    scanf("%d",&user);

    for ( i = 1; i<=user; i++)
    {
        printf(" %02d ",i);

        if (i%10==0)
        {
            printf("\n");
        }
        
    }
    

}