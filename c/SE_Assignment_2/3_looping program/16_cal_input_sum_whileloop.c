#include <stdio.h>
int main()
{

    int user, i = 1, sum = 0;

    while (i <= 10)
    {
        printf("enter the number ");
        scanf("%d", &user);

        if (user > 0)
        {
            sum = sum + user;
        }
        i++;
    }
    printf("total is: %d", sum);
}