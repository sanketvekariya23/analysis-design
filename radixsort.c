#include<stdio.h>
void printArray(int *arr, int size){
    for(int i=0; i<size; i++){
        printf("%d ",arr[i]);
    }
    printf("\n");
}
 void radixsort(int*a, int n){
    int max =0;
    for(int z=0; z<n; z++){
        if(a[z]>max){
            max=a[z];
        }
    }
    for(int pos=1;)
 }
int main(){
    int a[]={33,8,9,5,9,55,5};
    int n = 7;
    printArray(a,n);
    radixsort(a, n);
    return 0;
}