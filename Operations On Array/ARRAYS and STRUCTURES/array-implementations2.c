#include<stdio.h>
#include<stdlib.h>
struct student{
    int used_size;
    int total_size;
    int *ptr; // bcz DMA
};
void createArray(struct student *a, int u_size, int t_size){
    a->total_size = t_size;
    a->used_size = u_size;
    a->ptr = (int*)malloc(t_size * sizeof(int));   // creating the array
}
void setVal(struct student *a){
    int n;
    for(int i=0;i<a->used_size;i++){
        printf("Enter the value of %d position", i);
        scanf("%d",&n);

        (a->ptr)[i] = n;
    }
}
void show(struct student *a){
    for(int i=0;i<a->used_size;i++){
        printf("%d",(a->ptr)[i]);
    }
}
int main(){
    struct student marks;
    createArray(&marks,2,10);
    setVal(&marks);
    show(&marks);
    return 0;
}