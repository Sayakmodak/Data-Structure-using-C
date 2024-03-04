#include<stdio.h>
#include<stdlib.h>
struct Node {
    int data;
    struct Node *next;
};
void traversal(struct Node *head){

    struct Node *ptr = head;

    do
    {
        /* code */
        printf("Element :%d \n",ptr->data);
        ptr = ptr->next;
    } while (ptr!=head);
    
}
struct Node *insertFirst(struct Node *head,int data){
    struct Node *new_node = (struct Node *)malloc(sizeof(struct Node));
    new_node->data = data;

    struct Node *p = head->next;
    while (p->next!=head)
    {
        /* code */
        p = p->next;
    }
    p->next = new_node;
    new_node->next = head;
    head = new_node;

    return head;
}
int main(){
    struct Node *head = (struct Node *)malloc(sizeof(struct Node));
    struct Node *second = (struct Node *)malloc(sizeof(struct Node));
    struct Node *third = (struct Node *)malloc(sizeof(struct Node));

    head->data = 7;
    head->next = second;

    second->data = 18;
    second->next = third;

    third->data = 21;
    third->next = head;

    traversal(head);
    head = insertFirst(head,48);
    printf("After Insert :\n");
    traversal(head);
    return 0;
}