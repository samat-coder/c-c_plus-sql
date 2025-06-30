#include<stdio.h>
int main(){

    int a,b,sum;

    printf("enter the value for a: ");
    scanf("%d",&a);
    printf("enter the value for b: ");
    scanf("%d",&b); 

    printf("%d + %d = %d",a,b,sum=a+b);

    printf("\nsize for a:%d ",sizeof(a));
    printf("\nsize for b:%d ",sizeof(b));
    printf("\nsize for sum: %d",sizeof(sum));


}