#include<stdio.h>
#include<stdlib.h>
struct Node {
    int data;
    struct Node *next;
};
struct Node *insertAtGivenNode(struct Node *head, struct Node *prevNode,int data){
    struct Node *new_node = (struct Node *)sizeof(struct Node);
    new_node->data = data;

    new_node->next = prevNode->next;
    prevNode->next = new_node;

    return head;
}
void traversal(struct Node *ptr){
   while (ptr!=NULL)
    {
        printf("%d\n",ptr->data);
        ptr = ptr->next;
    }
    
}
int main(){
    struct Node *head = (struct Node *)malloc(sizeof(struct Node));
    struct Node *second = (struct Node *)malloc(sizeof(struct Node));
    struct Node *third = (struct Node *)malloc(sizeof(struct Node));

    /*printf("Enter data for head node : \n");
    scanf("%d",&head->data);*/
    head->data = 7;
    head->next = second;

   /*printf("Enter data for second node : \n");
    scanf("%d",&second->data);*/
    second->data = 18;
    second->next = third;

    /*printf("Enter data for third node : \n");
    scanf("%d",&third->data);*/
    third->data = 21;
    third->next = NULL;

    printf("Before Insert: \n");
    traversal(head);
    head = insertAtGivenNode(head,second,55);
    printf("After Insert: \n");
    traversal(head);
    return 0;
}