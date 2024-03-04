#include<stdio.h>

void printarray(int arr[],int n){
    printf("the elements of the array is :");
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    } 
}

void bubbleSort(int arr[],int n){
    int temp;
    int issorted = 0 ;
    for(int i=0;i<n-1;i++){         // Number of passes
        printf("Pass no. %d \n",i+1);
        issorted = 1;

            for(int j=0;j<n-1-i;j++){ // For swapping
                if(arr[j]>arr[j+1]){
                    temp = arr[j];
                    arr[j] = arr[j+1];
                    arr[j+1] = temp;
                    issorted = 0;
            }
        }
        if(issorted){
            return ;
        }
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
    printf("After Sorting : \n");
    bubbleSort(arr,n);
    printarray(arr,n);
    return 0;
}