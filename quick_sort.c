#include <stdio.h>
void printArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}
int partition(int arr[], int low, int high)
{
    int pivot = arr[low];
    int i = low + 1;
    int j = high;
    int temp;
    do
    {
        while (arr[i] <= pivot)
        {
            i++;
        }
        while (arr[j] > pivot)
        {
            j--;
        }
        if (i < j)
        {
            temp = arr[i];
            arr[i] = arr[j];
            arr[j] = arr[temp];
        }
    } while (i < j);
    // swap low and j
    temp = arr[low];
    arr[low] = arr[j];
    arr[j] = temp;
    return j;
}
void QuickSort(int arr[], int low, int high)
{
    int partitionindex; // index of pivot element after partitin
    if (low < high)
    {
        partitionindex = partition(arr, low, high);
        QuickSort(arr, low, partitionindex - 1);  // left array
        QuickSort(arr, partitionindex + 1, high); // right array
    }
}
int main()
{
    int arr[] = {2, 15, 10, 55, 1};
    int size = 5;
    int low = 1;
    int high = size - 1;
    printArray(arr, size);
    printf("sorting array by quick sort(divide and conquer) and partition\n");
    QuickSort(arr, low, high);
    printArray(arr, size);
    return 0;
}