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
struct Node *deleteBetween(struct Node *tail,int position){
    struct Node *p = tail->next;
    int i = 1 ;
    while(i<position-1){
        p = p->next;
        i++;
    }
    struct Node *p2 ;
    p2 = p->next;
    p->next = p2->next;
    free(p2);
    p2 = NULL;
    return tail;
}
int main(){
    struct Node *tail;
    tail = createNode(45);
    tail = insertEnd(tail,85);
    tail = insertEnd(tail,88);
    printf("Before deleting at the end: \n");
    traversal(tail);
    tail = deleteBetween(tail,2);
    printf("After deleting at the end: \n");
    traversal(tail);
    return 0;
}