#include<stdio.h>
#include<stdlib.h>
struct Node {
    struct Node *prev; 
    int data;
    struct Node *next; 
};
struct Node *createList(struct Node *head,int data){
    struct Node *temp = (struct Node *)malloc(sizeof(struct Node));
    temp->data = data;
    temp->next = NULL;
    temp->prev = NULL;
    head = temp;
    return head;
}
void traverse(struct Node *head){
    struct Node *p = head;
    while (p!=NULL)
    {
        printf("Element: %d \n",p->data);
        p = p->next;
    }
    
}
struct Node *insertFirst(struct Node *head,int data){
    struct Node *new_node = (struct Node *)malloc(sizeof(struct Node));
    new_node->next = NULL;
    new_node->data = data;
    new_node->prev = NULL;

    new_node->next = head;
    head->prev = new_node;
    head = new_node;
    return head;
}
int main(){
    struct Node *head;
    head = createList(head,45);
    head = insertFirst(head,56);
    traverse(head);
    return 0;
}