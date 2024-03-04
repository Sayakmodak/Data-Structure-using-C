#include<stdio.h>
void printarray(int arr[],int n){
    printf("the elements of the array is :");
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    } 
}
void insertionSort(int arr[],int n){
    int temp,j;
    for(int i=1;i<n;i++){
        temp = arr[i];
        j = i-1;

        while(j>=0 && arr[j]>temp){
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = temp;
    }
}
int main(){
    int n;
    int arr[100];
    printf("Enter the size of the array : ") ;
    scanf("%d",&n);

    printf("\nEnter the elments in the array : \n");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    
    printarray(arr,n);
    printf("\nAfter Sorting : \n");
    insertionSort(arr,n);
    printarray(arr,n);
    return 0;
}