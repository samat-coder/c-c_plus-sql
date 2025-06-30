#include <iostream>
using namespace std;

template <typename T>
void sortArray(T arr[], int size)
{
    for (int i = 0; i < size - 1; i++)
    {
        for (int j = i + 1; j < size; j++)
        {
            if (arr[i] > arr[j])
            {
                T temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}

template <typename T>
void displayArray(T arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main()
{
    int intArr[] = {64, 34, 25, 12, 22, 11, 90};
    int intSize = sizeof(intArr);

    cout << "Original integer array: ";
    displayArray(intArr, intSize);

    sortArray(intArr, intSize);

    cout << "Sorted integer array: ";
    displayArray(intArr, intSize);

    return 0;
}