#include<stdio.h>
int main(){

    int angle1,angle2,angle3,sum;

    printf("enter your value for angle 1: ");
    scanf("%d",&angle1);
    printf("enter your value for angle 2: ");
    scanf("%d",&angle2);
    printf("enter your value for angle 3: ");
    scanf("%d",&angle3);

    sum=angle1+angle2+angle3;

    if(sum==180 && angle1>0 && angle2>0 && angle3>0)
    {
        printf("triangle can be formed with given values");
    }
    else
    {
        printf("triangle cannot be formed with given values");
    }

}