#include<stdio.h>
int main(){

    int customer_id,units;
    char name[50];
    float charge,total_amount;

    printf("enter the customer id: ");
    scanf("%d",&customer_id);
    printf("enter the customer name: ");
    scanf("%s",&name);
    printf("enter the units: ");
    scanf("%d",&units);

    printf("\n\t\tcustomer id: %d ",customer_id);
    printf("\n\t\tname: %s",name);
    printf("\n\t\tunit consumed: %d ",units);

    if(units>=350){
        total_amount=units*1.20;
        printf("\n\t\ttotal payment is %f",total_amount);
    }
    else if (units>=350 && units<=600)
    {
        total_amount=units*1.50;
        printf("\n\t\ttotal payment is %f",total_amount);  
    }
     else if (units>=600 && units<=800)
    {
        total_amount=units*1.80;
        printf("\n\t\ttotal payment is %f",total_amount);  
    }
    else
    {
       total_amount=units*2.00;
       printf("\n\t\ttotal payment is %f",total_amount);
    }
    

}