#include<stdio.h>
int main(){

    int i=0,user,even_count=0,odd_count=0,sum_even=0,sum_odd=0;

    while (i<=5)
    {
        printf("enter the number:",i+1);
        scanf("%d",&user);
        
        if (user%2==0)
        {
            even_count++;
            sum_even+=user;
        }
        else
        {
            odd_count++;
            sum_odd+=user;
        }
        i++;
        
    }

    printf("\n\todd numbers is:              %d",odd_count);
    printf("\n\teven numbers is:             %d",even_count);
    printf("\n");
    printf("\n\tall odd numbers addition is: %d",sum_odd);
    printf("\n\tall even numbers addition is:%d",sum_even);
    

}