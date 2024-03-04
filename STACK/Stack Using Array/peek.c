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

int pop(struct stack *ptr){  // equal to the stackTop()
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
void peek(struct stack *sp){
    printf("The top most element if the stack is %d\n",sp->arr[sp->top]);
}
void stackBottom(struct stack *sp){
    printf("The most bottom element of the stack is %d \n",sp->arr[0]);
}
void display(struct stack *sp){
    for(int i=0; i<=sp->top; i++){
        printf("\n%d\n",sp->arr[i]);
    }
}
int main(){
    struct stack *s;
    s = createStack(20);
    push(s,20);
    push(s,25);
    push(s,30);
    //pop(s);
    peek(s);
    if(isEmpty(s)){
        printf("Stack is empty");
    }
    else{
        printf("Stack is not empty");
    }
    display(s);
    stackBottom(s);
    return 0;
}