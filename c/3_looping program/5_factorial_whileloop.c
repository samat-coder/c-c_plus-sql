#include<stdio.h>
int main(){

    int user,i=1,factorial=1;  
    printf("enter the number you want to factorial: ");
    scanf("%d",&user);

    while (i<=user)
    {
        factorial=factorial*i;
        i++;
    }

    printf("\n\t%d factorial is: %d",user,factorial);
          

}