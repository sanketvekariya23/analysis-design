#include<stdio.h>
void printArray(int*arr,int size){
    for(int i=0; i<=size-1;i++){
        printf("%d ",arr[i]);
    }
    printf("\n");
}
void insertionsort(int *arr,int size){
    // for loop for passes
    int j,key;
    for(int i=1; i<=size-1; i++){
        key = arr[i];
        j=i-1;
        while(j>=0 && arr[j]>key){
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=key;
    }
}
int main(){
int arr[]={7,3,9,5,1};
int size = 5;
printArray(arr,size);   // print array before sort
insertionsort(arr,size);// perform insertion sort 
printf("after inserton sorting array in sort :");
printArray(arr,size);   // print array after sort
return 0;
}