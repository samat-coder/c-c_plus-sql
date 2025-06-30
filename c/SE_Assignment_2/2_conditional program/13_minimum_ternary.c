#include<stdio.h>
int main(){

    int a,b,c,min;

    printf("enter the number: ");
    scanf("%d %d %d",&a,&b,&c);

    min=(a<b) ? ((a<c) ? a:c) : ((b<c) ? b:c);
    printf("%d is min",min);

}