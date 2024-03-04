#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
#include<limits.h>

struct stack{
    int top;
    unsigned size;
    char *arr;
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
int match(int a,int b){
    if(a=='(' && b==')'){
        return 1;
    }
    if(a=='{' && b=='}'){
        return 1;
    }
    if(a=='[' && b==']'){
        return 1;
    }
    return 0;
}
int parenthesisMatch(char exp[]){
    struct stack *sp;
    sp = (struct stack*)malloc(sizeof(struct stack));
    sp->top = -1;
    sp->size = 20;
    sp->arr = (char *)malloc(sp->size * sizeof(char));
    char popped_ch;
    
    for(int i=0;exp[i]!='\0';i++){
        if(exp[i]=='(' || exp[i]=='{' || exp[i]=='['){
            push(sp,exp[i]);
        }
        else if(exp[i]==')'|| exp[i]=='}' || exp[i]==']'){
            if(isEmpty(sp)){
                return 0;
            }
            popped_ch = pop(sp);
            if(!match(popped_ch,exp[i])){
                return 0;
            }
        }
    }
    if(isEmpty(sp)){
        return 1;
    }
    else{
        return 0;
    }
}
int main(){
    //char *exp = "[4-6]((8){(9-8)}])" ;
    
    char exp[100] ;
    printf("Enter an expression :\n");
    gets(exp);


    if(parenthesisMatch(exp)){
        printf("The parenthesis is balanced");
    }
    else{
        printf("The parenthesis is not balanced");
    }

    return 0;
}