#include <stdio.h>

int main()
{
    int arr1[5], result;

    for (int i = 0; i < 5; i++)
    {
        printf("arr1[%d]: ", i);
        scanf("%d", &arr1[i]);
    }
    for (int i = 0; i < 5; i++)
    {
        printf(" %d", arr1[i]);
    }
    for (int i = 0; i < 5; i++)
    {
        result += arr1[i];
    }
    printf("\n\ttotal is : %d",result);
    return 0;
}