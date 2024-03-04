#include<stdio.h>
#include<stdlib.h>
struct Node{
    int data;
    struct Node *next;
};
void traversal(struct Node *ptr){
    while(ptr!=NULL){
        printf("Element : %d\n",ptr->data) ;
        ptr = ptr->next;
    }
}
struct Node *insertNode(struct Node *head,int data){
    struct Node *new_node = (struct Node *)malloc(sizeof(struct Node));
    new_node->data = data;
    new_node->next = head;
    head = new_node;

    return head;
}
int main(){
    struct Node *head = (struct Node *)malloc(sizeof(struct Node));
    struct Node *second = (struct Node *)malloc(sizeof(struct Node));
    struct Node *third = (struct Node *)malloc(sizeof(struct Node));
    int data = 30;

    head->data = 7;
    head->next = second;

    second->data = 21;
    second->next = third;

    third->data = 28;
    third->next = NULL;

    printf("Before Insert: \n");
    traversal(head);
    head = insertNode(head,data);
    printf("After Insert: \n");
    traversal(head);
    return 0;
}
