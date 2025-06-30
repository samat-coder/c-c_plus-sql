#include <stdio.h>
int main()
{

    int arr1[20], arr2[20], size, i, temp1, temp2;
    char choice;

    printf("enter the size of array: ");
    scanf("%d", &size);

    for (i = 0; i < size; i++)
    {

        printf("enter arr value[%d]: ", i);
        scanf("%d", &arr1[i]);
    }
    for (i = 0; i < size; i++)
    {

        printf("enter arr value[%d]: ", i);
        scanf("%d", &arr2[i]);
    }
    for (i = 0; i < size; i++)
    {

        printf(" %d", arr1[i]);
    }
    printf("\n");
    for (i = 0; i < size; i++)
    {

        printf(" %d", arr2[i]);
    }

    printf("\nenter your choice(ascending or decending):");
    scanf(" %c", &choice);

    for (i = 0; i < size; i++)
    {
        for (int c = i + 1; c < size; c++)
        {
            if ((choice == 'a' && arr1[i] > arr1[c]) || (choice == 'd' && arr1[i] < arr1[c]))
            {
                temp1 = arr1[i];
                arr1[i] = arr1[c];
                arr1[c] = temp1;
            }
        }
    }
    for (i = 0; i < size; i++)
    {
        for (int k = i + 1; k < size; k++)
        {
            if ((choice == 'a' && arr2[i] > arr2[k]) || (choice == 'd' && arr2[i] < arr2[k]))
            {
                temp2 = arr2[i];
                arr2[i] = arr2[k];
                arr2[k] = temp2;
            }
        }
    }
    for (i = 0; i < size; i++)
    {

        printf(" %d", arr1[i]);
    }
    printf("\n");
    for (i = 0; i < size; i++)
    {

        printf(" %d", arr2[i]);
    }
}
