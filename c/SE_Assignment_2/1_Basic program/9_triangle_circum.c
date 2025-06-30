#include<stdio.h>
int main(){

        int a,b,c,circumference;

        printf("\n\tenter the length of side a: ");
        scanf("%d",&a);
        printf("\n\tenter the length of side b: ");
        scanf("%d",&b);
        printf("\n\tenter the length of side c: ");
        scanf("%d",&c);

        circumference=a+b+c;

        printf("\n\t\tcircumference of triangle: %d",circumference);

}