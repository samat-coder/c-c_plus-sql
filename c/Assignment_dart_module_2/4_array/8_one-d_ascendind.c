#include <stdio.h>
int main()
{

    int arr[20], size, i, temp;

    printf("enter the size of array: ");
    scanf("%d", &size);

    for (i = 0; i < size; i++)
    {
        printf("enter the array element[%d]: ", i);
        scanf("%d", &arr[i]);
    }
    for (i = 0; i < size; i++)
    {
        printf(" %d", arr[i]);
    }
    for (i = 0; i < size; i++)
    {
        for (int k = i + 1; k < size; k++)
        {
            if (arr[i] > arr[k])
            {
                temp = arr[i];
                arr[i] = arr[k];
                arr[k] = temp;
            }
        }
    }
    printf("\n");
    for (i = 0; i < size; i++)
    {
        printf(" %d", arr[i]);
    }
}