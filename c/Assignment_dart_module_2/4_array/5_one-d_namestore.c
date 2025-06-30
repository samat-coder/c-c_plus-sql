#include<stdio.h>
int main(){

    char a[5][10];
    int i;

    for ( i = 0; i < 5; i++)
    {
        printf("enter the name[%d]: ",i);
        scanf(" %s",&a[i]);
    }
    for(i=0; i<5; i++){
        printf(" %s",a[i]);
    }
    

}