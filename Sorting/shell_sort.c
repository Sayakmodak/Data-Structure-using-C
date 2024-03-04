#include<stdio.h>
void printarray(int arr[],int n){
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
}
void shellSort(int arr[],int n){
    int gap,temp,j;
    for(gap=n/2;n>0;gap/2){
        for(int i=gap;i<n;i++){
            for(int j=i;j>=gap && arr[j-gap]>temp;j-gap){
                arr[j] = arr[j - gap];
            }
            arr[j] = temp;
        }
    }
}

int main(){
    int arr[] = {50,20,10,90,60};
    int n = 5;
    printarray(arr,n);
    shellSort(arr,n);
    printf("\n");
    printarray(arr,n);
    return 0;
}