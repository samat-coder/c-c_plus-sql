#include <stdio.h>
int main()
{

    int arr[50], size, i, max;

    printf("enter the size of array: ");
    scanf("%d", &size);

    for (i = 0; i < size; i++)
    {
        printf("\n\t\tarr[%d]: ", i);
        scanf("%d", &arr[i]);
    }
    for (i = 0; i < size; i++)
    {
        printf("\n\t\t[%d] : %d", i, arr[i]);
    }
    for (i = 0; i < size; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }
    printf("\n\t\tmax number is %d", max);
}