#include<stdio.h>
int main(){
    int arr[50],n,size;
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

    printf("Enter the element: \n");
    scanf("%d",&n);

    for(int i=size;i>=0;i--){
        arr[i+1] = arr[i];
    }
    arr[0]=n;
    size++;

    printf("After inserting the array elements are: \n");
    for(int i=0;i<size;i++){
        printf("%d ",arr[i]);
    }
    return 0;
}