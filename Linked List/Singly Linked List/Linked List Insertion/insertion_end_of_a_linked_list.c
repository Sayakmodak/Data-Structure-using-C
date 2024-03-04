#include<stdio.h>
#include<stdlib.h>
struct Node{
    int data;
    struct Node *next;
};
void traversal(struct Node *ptr){
    while (ptr!= NULL)
    {
        printf("Element: %d\n",ptr->data);
        ptr = ptr->next;
    }
}
struct Node *insertEnd(struct Node *head,int data){
    struct Node *new_node =(struct Node *)malloc(sizeof(struct Node)); 

    struct Node *ptr = head;
    while(ptr->next!=NULL){
        ptr = ptr->next;
    }
    new_node->data = data;
    ptr->next = new_node;
    new_node->next = NULL;

    return head;
}
int main(){
    struct Node *head = (struct Node *)malloc(sizeof(struct Node));
    struct Node *second = (struct Node *)malloc(sizeof(struct Node));
    struct Node *third = (struct Node *)malloc(sizeof(struct Node));
    struct Node *new_node = (struct Node *)malloc(sizeof(struct Node));

    head->data = 7;
    head->next = second;

    second->data = 18;
    second->next = third;

    third->data = 21;
    third->next = NULL;
    
    printf("Before Insert: \n");
    traversal(head);
    head = insertEnd(head,59);
    printf("After Insert: \n");
    traversal(head);
    return 0;
}