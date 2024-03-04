#include<stdio.h>
void printarray(int arr[],int n){
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
}
void merge(int arr[],int lb,int mid,int ub){
    int i = lb;
    int j = mid+1;
    int k = lb;
    int b[50] ;
    while(i<=mid && j<=ub){
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
    while(j<=ub){
        b[k] = arr[j];
        k++;
        j++;
    }
    
    for(int i=lb;i<=ub;i++){
    arr[i] = b[i];
    }
}
void mergesort(int arr[],int lb,int ub){
    int mid ;
    if(lb<ub){
        mid = (lb+ub)/2 ;
        mergesort(arr,lb,mid);
        mergesort(arr,mid+1,ub);
        merge(arr,lb,mid,ub);
    }
}
int main(){
    int arr[] = {50,40,10,20,10};
    int n = 5;
    int lb = 0;
    int ub = n-1; 
    printarray(arr,n);
    mergesort(arr,lb,ub);
    printf("\n");
    printarray(arr,n);
    return 0;
}