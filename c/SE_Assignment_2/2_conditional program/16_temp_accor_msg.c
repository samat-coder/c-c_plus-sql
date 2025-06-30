#include <stdio.h>
int main()
{

    float temp;

    printf("enter the temperature in centigrade: ");
    scanf("%f", &temp);

    if (temp < 0)
    {
        printf("freeze weather");
    }
    else if (temp >= 1 && temp >= 10)
    {
        printf("very cold weather");
    }
    else if (temp >= 10 && temp >= 20)
    {
        printf(" cold weather");
    }
    else if (temp >= 20 && temp >= 30)
    {
        printf("normal weather");
    }
    else if (temp >= 30 && temp >= 40)
    {
        printf("hot weather");
    }
    else
    {
        printf("very hot weather");
    }
}