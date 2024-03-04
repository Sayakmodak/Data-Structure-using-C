#include<stdio.h>
#include<stdlib.h>
struct Node{
    int data;
    struct Node *next;
};
struct Node *top = NULL;
void display(){
    struct Node *ptr = top;
    while(ptr!=NULL){
        printf("%d ",ptr->data);
        ptr = ptr->next;
    }
}
void push(int data){
    struct Node *new_p = (struct Node *)malloc(sizeof(struct Node));
    new_p->data = data;
    if(new_p == NULL){
        printf("Stack Overflow.");
    }
    else{
        new_p->next = top;
        top = new_p;
    }
}
void pop(){
    struct Node *ptr = top;
    int val;
    if(top == NULL){
        printf("Stack Underflow.");
    }
    else{
        val = top->data;

        top = top->next;
        free(ptr);
        ptr = NULL;
    }
    printf("\n%d popped out from the stack.",val);
}
int main(){
    struct Node *top = NULL; 
    push(20);
    push(21);
    push(22);
    display();
    printf("\n");
    pop();
    display();
    return 0;
}
