#include<stdio.h>
#include<stdlib.h>
struct queue{
    int size;
    int front;
    int rear;
    int *arr;
};
void enqueue(struct queue *q,int val){
    if(q->rear == q->size - 1){
        printf("Queue Overflow...");
    }
    else{
        q->rear = q->rear + 1;
        q->arr[q->rear] = val;
    }
}
int dequeue(struct queue *q){
    int a;
    if(q->front == q->rear){
        printf("Queue Underflow...");
    }
    else{
        a = q->arr[q->front];
        q->front = q->front + 1;
        return a;
    }
}
void display(struct queue *q){
    for(int i=q->front+1;i<q->rear+1;i++){
        printf("%d ",q->arr[i]);
    }
}
int main(){
    struct queue *q = (struct queue *)malloc(sizeof(struct queue));
    q->size = 100;
    q->arr = (int *)malloc(q->size * sizeof(int));
    q->front = q->rear = -1;

    enqueue(q,25);
    enqueue(q,26);
    enqueue(q,27);
    dequeue(q);
    display(q);
    return 0;
}