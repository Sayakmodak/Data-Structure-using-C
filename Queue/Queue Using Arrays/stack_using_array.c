#include<stdio.h>
#include<stdlib.h>
#include<limits.h>
struct Stack{
    int top;
    unsigned size;
    int *arr;
};
struct Stack *createStack(unsigned size){
    struct Stack *s = (struct Stack *)malloc(sizeof(struct Stack));
    s->top = -1;
    s->size = size;
    s->arr = (int *)malloc(sizeof(int));
    return s;
}
int isFull(struct Stack *ptr){
    if(ptr->top == ptr->size-1){
        return 1;
    }
    else{
        return 0;
    }
}
int isEmpty(struct Stack *ptr){
    if(ptr->top == -1){
        return 1;
    }
    else{
        return 0;
    }
}
void push(struct Stack *ptr,int data){
    if(isFull(ptr)){
        printf("Stack Overflow...");
    }
    else{
        ptr->top++;
        ptr->arr[ptr->top] = data;
    }
    printf("\n%d has been inserted",data);
}
int pop(struct Stack *ptr){
    int val;
    if(isEmpty(ptr)){
        printf("Stack Underflow...");
    }
    else{
        val = ptr->arr[ptr->top];
        ptr->top--;
    }
}
void peek(struct Stack *ptr){
    printf("\nThe peek element is %d ",ptr->arr[ptr->top]);
}
void stackBottom(struct Stack *ptr){
    printf("The bottom element is %d ",ptr->arr[0]);
}
void display(struct Stack *ptr){
    for(int i=0;i<=ptr->top;i++){
        printf("%d ",ptr->arr[i]);
    }
    printf("\n");
}
int main(){
    struct Stack *st;
    st = createStack(20);
    push(st,20);
    push(st,21);
    push(st,22);
    pop(st);
    //peek(st);
    //stackBottom(st);
    display(st);
    return 0;
}