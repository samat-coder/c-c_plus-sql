#include<stdio.h>
int main(){

    int a,b,c;

    printf("\n\tenter the value for a: ");
    scanf("%d",&a);
    printf("\n\tenter the value for b: ");
    scanf("%d",&b);

    printf("\n\n\t\t--------before swapping--------");
    printf("\n\n\t\t\ta=%d",a);
    printf("\n\n\t\t\tb=%d",b);


    c=a;
    a=b;
    b=c;
    printf("\n\n\t\t--------after swapping--------");
    printf("\n\n\t\t\ta=%d",a);
    printf("\n\n\t\t\tb=%d",b);

}