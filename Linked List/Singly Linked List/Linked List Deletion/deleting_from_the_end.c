#include<stdio.h>
#include<stdlib.h>

struct Node {
    int data;
    struct Node *next;
};
void traversal(struct Node *ptr){
    while (ptr!=NULL)
    {
        /* code */
        printf("Element: %d\n",ptr->data);
        ptr = ptr->next;
    }
    
}
struct Node *deleteEnd(struct Node *head){
    struct Node *p = head;
    struct Node *q = head->next;
   while (q->next!=NULL)
   {
    /* code */
        p = p->next;
        q = q->next;
   }
    p->next = NULL;
    free(q);
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
    head = deleteEnd(head);
    printf("After deletion: \n");
    traversal(head);
    return 0;
}