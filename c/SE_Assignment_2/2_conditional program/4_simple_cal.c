#include <stdio.h>
int main()
{

    int a, b;
    char choice;

    printf("\n\n\t\tenter the first value  :  ");
    scanf("%d", &a);
    printf("\n\n\t\tenter the second value : ");
    scanf("%d", &b);

    printf("\n\t***********************************");

    printf("\n\n\t\tpress + for  addtion");
    printf("\n\n\t\tpress - for  addtion");
    printf("\n\n\t\tpress * for addtion");
    printf("\n\n\t\tpress / for addtion");

    printf("\n\n\t***********************************");

    printf("\n\n\t\tenter the your choice number");
    scanf(" %c",&choice);

    if (choice == '+')
    {
        printf("\n\t\t\t%d + %d = %d", a, b, a + b);
    }
    else if (choice == '-')
    {
        printf("\n\t\t\t%d - %d = %d", a, b, a - b);
    }
    else if (choice == '*')
    {
        printf("\n\t\t\t%d * %d = %d", a, b, a * b);
    }
    else if (choice == '/')
    {
        printf("\n\t\t\t%d / %d = %d", a, b, a / b);
    }
    else
    {
        printf("\n\n\t\tplease enter the valid number...");
    }
    
}