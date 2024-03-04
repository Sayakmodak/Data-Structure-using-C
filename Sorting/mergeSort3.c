#include<stdio.h>
void printArray(int arr[],int n){
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
}
void merge(int arr[],int mid,int low,int high){
    int i = low;
    int j = mid+1;
    int k = low;
    int b[50];

    while(i<=mid && j<=high){
        if(arr[i]<arr[j]){
            b[k] = arr[i];
            i++;
            k++;
        }
        else{
            b[k] = arr[j];
            j++;
            k++;
        }
    }
    while(i<=mid){
            b[k] = arr[i];
            k++;
            i++;
        }
        while(j<=high){
            b[k] = arr[j];
            k++;
            j++;
        }
        for(int i=low;i<=high;i++){
            arr[i] = b[i] ;

        }
}

void mergeSort(int arr[],int low,int high){
    int mid;
    if(low<high){
        mid = (low+high)/2 ;
        mergeSort(arr,low,mid);
        mergeSort(arr,mid+1,high);
        merge(arr,mid,low,high);
    }
}
int main(){
    int arr[50] = {20,30,50,10,5};
    int n = 5;
    int low = 0;
    int high = n-1;
    printArray(arr,n);
    mergeSort(arr,low,high);
    printf("\n");
    printArray(arr,n);
    return 0;
}