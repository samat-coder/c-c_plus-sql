#include <stdio.h>

int main()
{

    int user, term = 1, i;

    printf("enter the value : ");
    scanf("%d", &user);

    term = term * 2;

    for (i = 1; i < user; i++)
    {
        if (i == 1)
        {
            printf("1");
        }

        else if (term % 2 == 0)
        {
            term = (term * 3) / 2;
        }
        else
        {
            term = term * 2;
        }
        printf(" %d", term);
    }
}