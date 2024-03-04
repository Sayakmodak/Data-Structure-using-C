#include<stdio.h>

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
    printf("\n Enter the element: ");
    scanf("%d",&n);
    for(int i=size-1;i>=pos-1;i--){
        arr[i+1]=arr[i];
    }
    arr[pos-1] = n;    // because we are dealing with index
    size++;

    for(int i=0;i<size;i++){
        printf("%d \t",arr[i]);
    }
    return 0;
}