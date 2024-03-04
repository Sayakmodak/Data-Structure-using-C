#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
#include<string.h>
#include<limits.h>
struct stack{
    int top ;
    char *arr;
    unsigned size;
};
int isEmpty(struct stack *sp){
    if(sp->top == -1){
        return 1;
    }
    else{
        return 0;
    }
}
int isFull(struct stack *sp){
    if(sp->top == sp->size - 1){
        return 1;
    }
    else{
        return 0;
    }
}
void push(struct stack *sp,int val){
    if(isFull(sp)){
        printf("Stack is overlow...");
    }
    else{
        sp->top++;
        sp->arr[sp->top] = val; 
    }
}
int pop(struct stack *sp){
    int n;
    if(isEmpty(sp)){
        printf("Stack is underlow...");
    }
    else{
        n = sp->arr[sp->top];
        sp->top--;
    }
    return n;
}
int isOPerator(char ch){
    if(ch == '*' || ch == '/' || ch == '+' || ch == '-'){
        return 1;
    }
    return 0;
}
int precedence(char ch){
    if(ch == '*' || ch == '/'){
        return 2;
    }
    if(ch == '+' || ch == '-'){
        return 1;
    }
    else{
        return 0;
    }
}
int stackTop(struct stack *sp){
    return sp->arr[sp->top];
}
char *infixtoPostfix(char *infix){
    struct stack *sp = (struct stack *)malloc(sizeof(struct stack));
    sp->top = -1;
    sp->size = 20;
    sp->arr = (char *)malloc(sp->size * sizeof(char));
    char *postfix = (char *)malloc(strlen(infix)+1 * sizeof(char));

    int i=0; // Track infix traversal
    int j=0; // Track postfix addition 

    while (infix[i]!='\0')
    {
        if(!isOPerator(infix[i])){
            postfix[j] = infix[i] ;
            i++;
            j++;

        }
        else{
            if(precedence(infix[i])>precedence(stackTop(sp))){
                push(sp,infix[i]);
                i++;
            }
            else{
                postfix[j] = pop(sp);
                j++;
            }
        }
    }
    while(!isEmpty(sp)){
        postfix[j] = pop(sp);
        j++;
    }
    postfix[j] = '\0';
    return postfix;
}
int main(){
    char * infix = "a+b";
    printf("postfix is %s", infixtoPostfix(infix));
    return 0;
}