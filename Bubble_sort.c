#include<stdio.h>
void printArray(int *arr, int size){
    for(int i=0; i<size; i++){
        printf("%d ",arr[i]);
    }
    printf("\n");
}
void BubbleSort(int *arr, int size){
    int Issorted = 1;   
    printf("sorting of an array by bubble sort \n");
    for(int i=0; i<size-1; i++){
        for(int j= 0; j<size-1-i; j++){
            if(arr[j]>arr[j+1]){
                int temp;
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
                Issorted =0;
            }
            if(Issorted){
                return ;
            }
        }
    }
}
int main()
{
    int arr[] = {9,3,7,7,1};
    int size = 5;
    printArray(arr ,size);
    BubbleSort(arr, size);
    printArray(arr ,size);
    return 0;
}