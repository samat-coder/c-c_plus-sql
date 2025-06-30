#include<stdio.h>
int main(){

        float length,width,circumference;

        printf("enter the length of rectangle");
        scanf("%f",&length);
        printf("enter the width of rectangle");
        scanf("%f",&width);

        circumference=2*(length+width);
        printf("circumference of rectangle: %f",circumference);

}