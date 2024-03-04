#include<stdio.h>
#include<stdlib.h>

struct Node{
    int data;
    struct Node *next;
};

struct Node *front ;
struct Node *rear ;

void traversal(){
    struct Node *ptr = front;
    while(ptr!=NULL){
        printf("%d ",ptr->data);
        ptr = ptr->next;
    }
}
void enqueue(int val){
    struct Node *new_node = (struct Node *)malloc(sizeof(struct Node));
    if(new_node == NULL){
        printf("Queue Overflow...");
    }
    new_node->data = val;
    new_node->next = NULL;
    if(front == NULL){
        front = rear = new_node;
    }
    else{
        rear->next = new_node;
        rear = new_node;
    }
    
}
int dequeue(){
    int val ;
    if(front == rear == -1){
        printf("Queue Underflow...");
    }
    else{
        val = front->data;
        struct Node *temp;
        temp = front;
        front = front->next;
        free(temp);
    }
    return val;
}
int main(){
    enqueue(10);
    enqueue(20);
    enqueue(30);
    traversal();
    printf("After Dequeue : \n");
    dequeue();
    traversal();

    return 0;
}