#include<stdio.h>
#include<stdlib.h>
struct myArray{
    int total_size;
    int used_size;
    int *ptr;
};
void createArray(struct myArray*a,int t_size, int u_size){
    a->total_size = t_size;
    a->used_size = u_size;
    a->ptr = (int *)malloc(u_size * sizeof(int));
}
void setVal(struct myArray *a){
    int n;
    for(int i=0;i<a->used_size;i++){
        printf("Set the value for : %d ", i);
        scanf("%d",&n);
        (a->ptr)[i] = n;
    }
    
}
void show(struct myArray *a){
    for(int i=0;i<a->used_size;i++){
        printf("%d",(a->ptr)[i]);
    }
    
}
int main(){
    struct myArray student;
    createArray(&student,10,2);
    setVal(&student);
    show(&student);
    return 0;
}
