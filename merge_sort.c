// may be bug in this code.
#include <stdio.h>
void printArray(int *array, int size)
{
    for(int i = 0; i < size; i++)
    {
        printf("%d ", array[i]);
    }
    printf("\n");
}
void merge(int array[], int mid, int low, int high)
{
    int i, j, k, b[100];
    i = low;
    j = mid + 1;
    k = low;
    while (i <= mid && j <= high)
    {
        if (array[i] < array[j])
        {
            b[k] = array[i];
            i++;
            k++;
        }
        else
        {
            b[k] = array[j];
            j++;
            k++;
        }
        while (i <= mid)
        {
            b[k] = array[i];
            k++;
            i++;
        }
        while (j <= high)
        {
            b[k] = array[j];
            k++;
            j++;
        }
    }
    for (i = low; i <= high; i++)
    {
        array[i] = b[i];
    }
}
void mergesort(int array[], int low, int high)
{
    int mid;
    if (low < high)
    {
        mid = (low + high) / 2;
        mergesort(array, low, mid);
        mergesort(array, mid + 1, high);
        merge(array, mid, low, high);
    }
}
int main()
{
    int array[] = {90, 54, 77, 39, 1, 2};
    int size = 6;
    printArray(array, size);
    mergesort(array, 0, 5);
    printArray(array, size);
    return 0;
}
