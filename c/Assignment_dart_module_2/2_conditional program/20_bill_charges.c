#include<stdio.h>
int main(){

    int bill,finalbill;

    printf("enter the bill: ");
    scanf("%d",&bill);

    if (bill>800)
    {
        finalbill=bill + (bill*0.18);
    }
    else
    {
        finalbill=bill;
    }

    if (bill<256)
    {
        finalbill=256;
    }

    printf("\n\t\tthe final bill amount is %d",finalbill);
    
    
}