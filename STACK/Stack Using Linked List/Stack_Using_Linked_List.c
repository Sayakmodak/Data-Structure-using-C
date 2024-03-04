#include<stdio.h>
#include<stdlib.h>
struct Node{
    int data;
    struct Node *next;
};
struct Node *top = NULL;

void linkedListTraversal(){
    struct Node *ptr = top;
    while (ptr!=NULL)
    {
        printf("%d ",ptr->data);
        ptr = ptr->next;
    }
    
}
int isEmpty(struct Node *top){
    if(top == NULL){
        return 1;
    }
    else{
        return 0;
    }
}
int isFull(struct Node *top){
    struct Node *n = (struct Node *)malloc(sizeof(struct Node));
    if(n == NULL){
        return 1;
    }
    else{
        return 0;
    }
}
void push(int val){
        struct Node *n = (struct Node *)malloc(sizeof(struct Node));
        if(n == NULL){
            printf("Stack Overflow...");
        }
        n->data = val;
        n->next = NULL;

        n->next = top;
        top = n;    
}
int pop(){
    if(top==NULL){
        printf("stack Underflow...");
        return -1;
    }
    else{
        int data;
        struct Node *temp = top;
        data = top->data;

        top = top->next;
        free(temp);
        return data;
    }
}
int peek(){
        return top->data;
    }
int main(){
    struct Node *top = NULL ;
   
    push(75); // 1
    push(76); // 2
    push(77); // 3
    push(78); // 4

    pop() ; // pop() always returns a data which can be stored in a variable // 78 will be popped

    printf("The top most element is %d \n",peek());

    linkedListTraversal();

    if (isEmpty(top))
    {
        printf("\nStack is not empty");
    }
    else{
        printf("\nStack is empty");
    }
    
    return 0;
}