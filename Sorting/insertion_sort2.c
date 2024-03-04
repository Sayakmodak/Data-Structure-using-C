#include<stdio.h>
void printarray(int arr[],int n){
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
}
void insertionSort(int arr[],int n){
    int key, j;

    for(int i=1;i<n;i++){
        key = arr[i];
        j = i-1 ;
        while(j>=0 && arr[j]>key){
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = key;
    }
}
int main(){
    int arr[] = {50,40,30,20,10} ;
    int n = 5;
    printarray(arr,n);
    insertionSort(arr,n);
    printf("\nAfter Sorting : \n");
    printarray(arr,n);
    return 0;
}