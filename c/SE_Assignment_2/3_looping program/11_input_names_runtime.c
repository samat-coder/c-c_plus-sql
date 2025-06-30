#include<stdio.h>
int main(){

    char name[5][50];
    int i;

    for (i = 0; i < 5; i++)
    {
        printf("enter the name: ");
        scanf("%s",&name[i]);
    }
    for ( i = 0; i < 5; i++)
    {
        printf("\n\tname: %s",name[i]);
    }
    
    

    
    

}