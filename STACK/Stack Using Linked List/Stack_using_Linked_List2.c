#include<stdio.h>
#include<stdlib.h>
struct Node {
    int data;
    struct Node *next;
};
struct Node *top = NULL;
void traversal(){
    struct Node *ptr = top;
    while (ptr!=NULL)
    {
        printf("%d ",ptr->data);
        ptr = ptr->next;
    }
    
}
int isFull(struct Node *top){
    if(top==NULL){
        return 1;
    }
    return 0;
}
int isEmpty(struct Node *top){
    struct Node *n = (struct Node *)malloc(sizeof(struct Node));
    if(n==NULL){
        return 1;
    }
    else{
        return 0;
    }
}
void push(int data){
    struct Node *node = (struct Node *)malloc(sizeof(struct Node));
    if(node==NULL){
        printf("Stack Overflow...");
    }
    else{
        node->data = data;
        node->next = NULL;

        node->next = top;
        top = node ;
    }
}
void pop(){
    if(top==NULL){
        printf("Stack Underflow...");
    }
    else{
        struct Node *temp;
        temp = top;
        top = top->next;
        free(temp);
    }
}
int peek(){
    return top->data;
}
int main(){
    struct Node *top = NULL;
    push(10);
    push(20);
    push(30);
    push(40);
    traversal();
    printf("After popping : \n");
    pop();
    traversal();
    printf("The top most element is %d ",peek());
    if(isEmpty(top)){
        printf("The stack is empty\n");
    }
    else{
        printf("\n The stack is not empty");
    }
    return 0;
}