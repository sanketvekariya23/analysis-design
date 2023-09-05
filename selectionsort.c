#include <stdio.h>
void printArray(int *arr, int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

void selectionsort(int *arr, int size)
{
    int minimumelement, temp;
    for (int i = 0; i < size - 1; i++)
    {
        minimumelement = i;
        for (int j = i + 1; j < size; j++)
        {
            if (arr[j] < arr[minimumelement])
            {
                minimumelement = j;
            }
        }
        temp = arr[i];
        arr[i] = arr[minimumelement];
        arr[minimumelement] = temp;
    }
}
int main()
{

    int arr[] = {19, 88, 3, 1, 2};
    int size = 5;
    printArray(arr, size);
    selectionsort(arr, size);
    printArray(arr, size);

    return 0;
}