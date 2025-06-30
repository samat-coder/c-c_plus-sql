#include<stdio.h>
int main(){

    int n,row=1,column;

    printf("enter the number of row: ");
    scanf("%d",&n);

    while (row<=n)
    {
        int spaces=n-row;
        int stars=2*row-1;
        
        column=1;
        while (column<=spaces)
        {
            printf(" ");
            column++;
        }

        column=1;
        while (column<=stars)
        {
            printf("*");
            column++;
        }
        printf("\n");
        row++;
        
        
    }
    



}