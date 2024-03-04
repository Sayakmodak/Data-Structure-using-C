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

    new_node->data = 25 ;
    new_node->next = head ;
    head = new_node;

    traversal(head);
    return 0;
}