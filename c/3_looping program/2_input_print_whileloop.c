#include <stdio.h>
int main()
{

    int a, i = 1;
    while (i < 5)
    {
        printf("enter the number: ");
        scanf("%d", &a);

        printf("\n\tthe number is: %d\n", a);
        i++;
    }
}