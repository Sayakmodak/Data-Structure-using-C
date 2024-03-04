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
    return 0;
}