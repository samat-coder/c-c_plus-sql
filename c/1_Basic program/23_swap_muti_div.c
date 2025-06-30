#include<stdio.h>
int main(){

    int a,b,c,d,swap;
    a=20;
    b=32;
    c=22;
    d=5;

    printf("\n\t\t\t______before swapping________");
    printf("\n\n\t\t\t%d * %d = %d",a,b,a*b);
    printf("\n\n\t\t\t%d / %d = %d",c,d,c/d);

    swap=a;
    a=c;
    c=swap;
    swap=b;
    b=d;
    d=swap;

    printf("\n\t\t\t______after swapping________");
     printf("\n\n\t\t\t%d * %d = %d",a,b,a*b);
    printf("\n\n\t\t\t%d / %d = %d",c,d,c/d);

}