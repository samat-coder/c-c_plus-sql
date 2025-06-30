#include <stdio.h>

int main()
{
    char str[100];
    int i;
    printf("Enter a string: ");
    scanf("%s", &str[i]);
    printf("Individual characters in the string are:\n");

    for (i = 0; str[i] != '\0'; i++)
    {

        printf("%c\n", str[i]);
    }

   
}