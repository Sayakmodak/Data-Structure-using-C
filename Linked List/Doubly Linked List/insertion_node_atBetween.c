#include<stdio.h>
#include<stdlib.h>
struct Node {
    struct Node *prev;
    struct Node *next;
    int data;
};
struct Node *createList(struct Node *head,int data){
    struct Node *temp = (struct Node *)malloc(sizeof(struct Node));
    temp->prev = NULL;
    temp->data = data;
    temp->next = NULL;
    head = temp;
    return head;
}
void traverse(struct Node *head){
    struct Node *p = head;
    while(p!=NULL){
        printf("element : %d \n",p->data);
        p = p->next;
    }
}
struct Node *insertEnd(struct Node *head,int data){
    struct Node *new_node = (struct Node *)malloc(sizeof(struct Node));
    new_node->prev = NULL;
    new_node->data = data;
    new_node->next = NULL;
    struct Node *p = head;
    while(p->next!=NULL){
        p = p->next ;
    }
    p->next = new_node;
    new_node->prev = p;
    return head;
}
struct Node *insertBetween(struct Node *head,int data,int position){
    struct Node *new_node2 = (struct Node *)malloc(sizeof(struct Node));
    new_node2->prev = NULL;
    new_node2->data = data;
    new_node2->next = NULL;
    struct Node *p = head;
    int i = 1;
    while(i<position-1){
        p = p->next;
        i++;
    }
    struct Node *p2 = p->next;
    p->next = new_node2;
    new_node2->next = p2;
    new_node2->prev = p;
    p2->prev = new_node2;
    return head;
}
int main(){
    struct Node *head;
    head = createList(head,45);
    head = insertEnd(head,56);
    head = insertEnd(head,60);
    head = insertBetween(head,88,2);
    traverse(head);
    return 0;
}