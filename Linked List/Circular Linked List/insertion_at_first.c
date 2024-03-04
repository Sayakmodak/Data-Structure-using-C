#include<stdio.h>
#include<stdlib.h>

struct Node{
    int data;
    struct Node *next;
};
void traversal(struct Node *head){
    struct Node *p = head;
    do
    {
        /* code */
        printf("Element :%d \n",p->data);
        p = p->next ;
    } while (p!=head);
    
}
struct Node *insertFirst(struct Node *head,int data){
    struct Node *new_node = (struct Node *)malloc(sizeof(struct Node));
    new_node ->data = data;

    struct Node *p = head->next;
    while (p->next!=head)
    {
        /* code */
        p = p->next;
    }
    p->next = new_node;
    new_node->next = head;
    head = new_node ;
    return head;
}
int main(){
    struct Node *head = (struct Node *)malloc(sizeof(struct Node));
    struct Node *second = (struct Node *)malloc(sizeof(struct Node));
    struct Node *third = (struct Node *)malloc(sizeof(struct Node));
    struct Node *fourth = (struct Node *)malloc(sizeof(struct Node));
    

    head->data = 7;
    head->next = second;

    second->data = 18;
    second->next = third;

    third->data = 21;
    third->next = fourth;

    fourth->data = 27;
    fourth->next = head;

    traversal(head);
    head = insertFirst(head,88);
    traversal(head);
    return 0;
}