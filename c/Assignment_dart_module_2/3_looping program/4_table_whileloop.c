#include <stdio.h>
int main()
{

    int num;

    printf("enter the number which up to print the number");
    scanf("%d", &num);

    int i = 1;
    while (i <= num)
    {
        printf("\n\tmultiplication table for : %d", i);
        int j = 1;
        while (j <= 10)
        {
            printf("\n\t%d x %d = %d", i, j, i * j);
            j++;
        }
        i++;
    }
}