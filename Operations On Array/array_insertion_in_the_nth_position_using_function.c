#include<stdio.h>

void insert(int arr[],int pos,int n,int size){
    for(int i=size-1;i>=pos-1;i--){
        arr[i+1]=arr[i];
    }
    arr[pos-1] = n;
    size++;
}
int main(){
    int arr[50],size,pos,n;     
    printf("Enter the size of the array : ");
    scanf("%d",&size);
    printf("\nEnter the array elements: ");
    for(int i=0;i<size;i++){
        scanf("%d",&arr[i]);
    }
    printf("\nThe array elements are: ");
    for(int i=0;i<size;i++){
        printf("%d \t",arr[i]);
    }

    printf("\nEnter the position : ");
    scanf("%d",&pos);
    printf("\nEnter the element: ");
    scanf("%d",&n);

    insert(arr,pos,n,size);

    printf("\nThe array elements are: ");
    for(int i=0;i<=size;i++){
        printf("%d \t",arr[i]);
    }

    return 0;
}