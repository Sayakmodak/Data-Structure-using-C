#include<stdio.h>
int main(){
    int arr[50],size,n;

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

    

    for(int i=size;i>0;i--){
        // Nothing to be inserted
    }
    size--;
    printf("\nAfter Deletion the array elements are: \n");
    for(int i=0;i<size;i++){
        printf("%d ",arr[i]);
    }
    return 0;
}