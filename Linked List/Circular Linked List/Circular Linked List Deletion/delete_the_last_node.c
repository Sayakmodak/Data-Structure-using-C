#include<stdio.h>
#include<stdlib.h>
struct Node {
    int data;
    struct Node *next;
};
struct Node *createList(int data){
    struct Node *temp = (struct Node *)malloc(sizeof(struct Node));
    temp->data = data;
    temp->next = temp;
    return temp;
}
void traversal(struct Node *tail){
    struct Node *p = tail->next ;
    do
    {
        printf("Element : %d \n", tail->data);
        p = p->next;
    } while (p!=tail->next);
    
}
struct Node *insertEnd(struct Node *tail,int data){
    struct Node *newP = (struct Node *)malloc(sizeof(struct Node));
    newP->data = data;

   newP->next = tail->next;  
   tail->next = newP;
   tail = tail->next;

   return tail; 
}
struct Node *deleteLastNode(struct Node *tail){
    struct Node *p = tail->next;
    while(p->next!=tail){
        p = p->next;
    }
    p->next = tail->next;
    free(tail);
    tail = p;

    return tail;
}
int main(){
    struct Node *tail;
    tail = createList(58);
    tail = insertEnd(tail,56);
    tail = insertEnd(tail,60);
    printf("Before Delete: \n");
    traversal(tail);
    printf("After Delete: \n");
    tail = deleteLastNode(tail);
    traversal(tail);
    return 0 ;
}