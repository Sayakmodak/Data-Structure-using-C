#include<stdio.h>
#include<stdlib.h>
struct Node {
    int data;
    struct Node *left;
    struct Node *right;
};
struct Node *createNode(int data){
    struct Node *n;
    n = (struct Node *) malloc(sizeof(struct Node));
    n->data = data;
    n->left = NULL;
    n->right = NULL;
}
int main(){
    // Creating root node 
    struct Node *p = createNode(2);
    // Creating first child 
    
    struct Node *p1 = createNode(14);

    // Creating second child 
    struct Node *p2 = createNode(5);

    // Linking root node(p) with the first child(p1) and second child(p2)  
    
    p->left = p1;
    p->right = p2;
    return 0;
}
