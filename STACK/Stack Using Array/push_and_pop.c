#include<stdio.h>
#include<stdlib.h>
#include<limits.h>
struct stack{
    int top ;
    unsigned size ;
    int *arr;
};
struct stack *createStack(unsigned size){
    struct stack *s = (struct stack *)malloc(sizeof(struct stack));
    s->top = -1;
    s->size = size;
    s->arr = (int *)malloc(s->size * (sizeof(int)));
    return s;
}
int isEmpty(struct stack *ptr){
    if(ptr->top == -1){
        return 1;
    }
    else{
        return 0;
    }
}
int isFull(struct stack *ptr){
    if(ptr->top == ptr->size-1){
        return 1;
    }
    else{
        return 0;
    }
}
void push(struct stack *ptr,int n){
    if(isFull(ptr)){
        printf("Stack Overflow...");
    }
    else{
        ptr->top = ptr->top + 1;
        ptr->arr[ptr->top] = n;
    }  
    printf("%d pushed in the stack\n",n);
}

int pop(struct stack *ptr){
    int val ;
    if(isEmpty(ptr)){
        printf("Stack Underflow...");
    }
    else{
        val = ptr->arr[ptr->top];
        ptr->top = ptr->top - 1;
    }
    printf("%d popped out from the stack\n",val);
    return val;
}

int main(){
    struct stack *s;
    s = createStack(20);
    push(s,20);
    pop(s);
    if(isEmpty(s)){
        printf("Stack is empty");
    }
    else{
        printf("Stack is not empty");
    }
    
    return 0;
}