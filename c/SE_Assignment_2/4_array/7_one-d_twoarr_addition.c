#include <stdio.h>

int main()
{
    int arr1[20], arr2[20], result[20], size;

    printf("Enter the size of the arrays: ");
    scanf("%d", &size);

    printf("Enter elements of arr1:\n");
    for (int i = 0; i < size; i++)
    {
        printf("arr1[%d]: ", i);
        scanf("%d", &arr1[i]);
    }

    printf("Enter elements of arr2:\n");
    for (int i = 0; i < size; i++)
    {
        printf("arr2[%d]: ", i);
        scanf("%d", &arr2[i]);
    }

    for (int i = 0; i < size; i++)
    {
        result[i] = arr1[i] + arr2[i];
    }

    printf("\nResult of addition:\n");
    for (int i = 0; i < size; i++)
    {
        printf("result[%d] = %d\n", i, result[i]);
    }

    return 0;
}