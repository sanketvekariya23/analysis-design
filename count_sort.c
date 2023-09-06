#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
void printarray(int *arr, int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}
void countsort(int *arr, int size)
{
    int i, j;
    // finding a maximum element in the array
    int max =0 ;
    for (i = 0; i < size; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }
    // create array size of max
    int *counting = (int *)malloc((max + 1) * sizeof(int));
    // intialize counting array with zero
    for (j = 0; j < max + 1; j++)
    {
        counting[j] = 0;
    }
    // increment corresponding index by one
    for (j = 0; j < size; j++)
    {
        counting[arr[j]] = counting[arr[j]] + 1;
    }
    i = 0;
    j = 0;
    while (j <= max)
    {
        if (counting[j] > 0)
        {
            arr[i] = j;
            i++;
            counting[j]--;
        }
        else
        {
            j++;
        }
    }
}
int main()
{
    int arr[] = {99, 32, 2, 1, 66, 8};
    int size = 6;
    printarray(arr, size); // print array before sorting
    countsort(arr, size);
    printarray(arr, size); // print array after sorting
    return 0;
}