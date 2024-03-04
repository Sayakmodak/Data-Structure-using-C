#include<stdio.h>
#include<stdlib.h>
struct Node {
    int data ;
    struct Node *next;
};
struct Node *createNode(int data){
    struct Node *temp = (struct Node *)malloc(sizeof(struct Node));
    temp->data = data;
    temp->next = temp;

    return temp;
}
struct Node *insertEnd(struct Node *tail, int data){
    struct Node *newP = (struct Node *)malloc(sizeof(struct Node));
    newP->data = data;

    newP->next = tail->next;
    tail->next = newP;
    tail = tail->next;

    return tail;
}
void traversal(struct Node *tail){
    struct Node *p = tail->next;
    do{
        printf("Element : %d \n",p->data);
        p = p->next ;
    }while(p!=tail->next);
}
struct Node *insertBetween(struct Node *tail,int data,int position){
    struct Node *new_node = (struct Node *)malloc(sizeof(struct Node));
    new_node->data = data;
    new_node->next = NULL;

    struct Node *ptr = tail->next;
    int i=1;
    while (i<position-1)
    {
        ptr = ptr->next;
        i++;
    }
    new_node->next = ptr->next;
    ptr->next = new_node;
    if(ptr==tail){
        tail = tail->next;
    }
    return tail;
}
int main(){
    struct Node *tail;
    tail = createNode(45);
    tail = insertEnd(tail,85);
    tail = insertEnd(tail,88);
    printf("Before inserting at the end: \n");
    traversal(tail);

    printf("After inserting at the end: \n");
    tail = insertBetween(tail,56,3);
    traversal(tail);
    return 0;
}