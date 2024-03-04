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
struct Node *insertBegining(struct Node *tail, int data){
    struct Node *newP = (struct Node *)malloc(sizeof(struct Node));
    newP->data = data;

    newP->next = tail->next;
    tail->next = newP;

    return tail;
}
void traversal(struct Node *tail){
    struct Node *p = tail->next;
    do{
        printf("Element : %d \n",p->data);
        p = p->next ;
    }while(p!=tail->next);
}
struct Node *insertEnd(struct Node *tail, int data){
    struct Node *new_node = (struct Node *)malloc(sizeof(struct Node));
    new_node->data = data;

    new_node->next = tail->next;
    tail->next = new_node;
    tail = tail->next;

    return tail;
}

int main(){
    struct Node *tail;
    tail = createNode(45);
    tail = insertBegining(tail,85);
    printf("Before inserting at the end: \n");
    traversal(tail);
    printf("After inserting at the end: \n");
    tail = insertEnd(tail,56);
    traversal(tail);
    return 0;
}