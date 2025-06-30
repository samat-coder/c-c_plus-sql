#include<stdio.h>
int main(){

    int user,i=1;

    printf("enter the number you want to multiplication : ");
    scanf("%d",&user);

    while (i<=10)
    {
        printf("%d x %d = %d\n",user,i,user*i);
        i++;
    }

    

}