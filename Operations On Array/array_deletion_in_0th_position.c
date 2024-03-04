#include<stdio.h>
int main(){
    int arr[50],size;
    printf("Enter the array size: \n");
    scanf("%d",&size);
    printf("Enter array elements : \n");
    for(int i=0;i<size;i++){
        scanf("%d",&arr[i]);
    }
    printf("The array elements are: \n");
    for(int i=0;i<size;i++){
        printf("%d ",arr[i]);
    }

    for(int i=0;i<size-1;i++){
        arr[i]=arr[i+1];
    }
    size--;

    printf("\nAfter Deletion The array elements are: ");
    for(int i=0;i<size;i++){
        printf("%d \t",arr[i]);
    }
    return 0;
}