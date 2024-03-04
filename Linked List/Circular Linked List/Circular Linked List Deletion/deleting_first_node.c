#include<stdio.h>
#include<stdlib.h>
struct Node{
    int data;
    struct Node *next;
};
struct Node *creatList(int data){
    struct Node *temp = (struct Node *)malloc(sizeof(struct Node));
    temp->data = data;
    temp->next = temp;
    return temp;
} 
void traversal(struct Node *tail){
    struct Node *ptr = tail->next;
    do
    {
        printf("Element : %d \n",ptr->data);
        ptr = ptr->next;
    } while (ptr!=tail->next);
    
}
struct Node *insertEnd(struct Node *tail,int data){
    struct Node *newP = (struct Node *)malloc(sizeof(struct Node));
    newP->data = data;

    newP->next = tail->next;
    tail->next = newP;
    tail = tail->next;

    return tail;
}
struct Node *deleteFirstNode(struct Node *tail){
    struct Node *p = tail->next;
    tail->next = p->next;   // it means we have to update the head node 
    
    free(p);
    p = NULL;

    return tail;
}
int main(){
    struct Node *tail;
    tail = creatList(58);
    tail = insertEnd(tail,56);
    tail = insertEnd(tail,60);
    printf("Before Delete: \n");
    traversal(tail);
    printf("After Delete: \n");
    tail = deleteFirstNode(tail);
    traversal(tail);
    return 0;
}