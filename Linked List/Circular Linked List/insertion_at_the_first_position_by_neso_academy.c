#include<stdio.h>
#include<stdlib.h>

struct Node{
    int data;
    struct Node *next;
};
struct Node *createNode(int data){
    struct Node *temp = (struct Node *)malloc(sizeof(struct Node));
    temp->data = data;
    temp->next = temp ;

    return temp;
}
void traversal(struct Node *tail){
    struct Node *p = tail->next;
    do
    {
        printf("Element : %d \n",p->data);
        p = p->next ;
    } while (p!=tail->next);
    
}
struct Node *insertNode(struct Node *tail, int data){
    struct Node *newP = (struct Node *)malloc(sizeof(struct Node));
    newP->data = data ;

    newP->next = tail->next;
    tail->next = newP;

    return tail; 
}
int main(){
    struct Node *tail ;
    tail = createNode(57);
    tail = insertNode(tail,85);
    tail = insertNode(tail,75);
    tail = insertNode(tail,89);

    traversal(tail);
   
    return 0 ;
}