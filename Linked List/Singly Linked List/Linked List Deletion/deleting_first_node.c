#include<stdio.h>
#include<stdlib.h>

struct Node {
    int data;
    struct Node *next;
};
void traversal(struct Node *ptr){
    while(ptr!=NULL){
        printf("Element :%d \n",ptr->data);
        ptr = ptr->next;
    }
}
struct Node *deleteNode(struct Node *head){
    struct Node *ptr;
    ptr = head;

    head = head->next;
    free(ptr);
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
    third->next = NULL;

    printf("Before deletion: \n");
    traversal(head);
    head = deleteNode(head);
    printf("After deletion: \n");
    traversal(head);

    return 0;
}