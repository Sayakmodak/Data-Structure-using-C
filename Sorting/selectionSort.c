#include<stdio.h>
void printarray(int arr[],int n){
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
}
void selectionSort(int arr[],int n){
    int temp;
    for(int i=0;i<n-1;i++){
        int indexofMin = i;
        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[indexofMin]){
                temp = arr[j];
                arr[j] = arr[indexofMin];
                arr[indexofMin] = temp;
            }
        }
    }
}
int main(){
    int arr[] = {50,40,30,20,10} ;
    int n = 5;
    printarray(arr,n);
    selectionSort(arr,n);
    printf("\nAfter Sorting : \n");
    printarray(arr,n);
    return 0;
}