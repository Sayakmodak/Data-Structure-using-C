#include<stdio.h>
int main(){
    int arr[50],n;
    int size,pos;

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
   

    for(int i=pos-1;i<size-1;i++){
        arr[i]=arr[i+1];
    }
    size--;

    printf("\nAfter Deletion The array elements are: ");
    for(int i=0;i<size;i++){
        printf("%d \t",arr[i]);
    }
    return 0;
}