#include<stdio.h>
#include<stdlib.h>

struct Node {
    int data;
    struct Node *left;
    struct Node *right;
};

struct Node *createNode(int data){
    struct Node *n;
    n = (struct Node *)malloc(sizeof(struct Node));
    n->data = data;
    n->left = NULL;
    n->right = NULL;
}

void preOrder(struct Node *root){
    if(root!=NULL){ // Until it reaches the leaf node
        printf("%d ",root->data);
        preOrder(root->left);
        preOrder(root->right);
    }
}
int main(){
    struct Node *p;
    struct Node *p1;
    struct Node *p2;
    struct Node *p3;
    struct Node *p4;

     //      2
    //     / \
    //    5  7
    //   / \
    //  13  11  

    p = createNode(2);
    p1 = createNode(5);
    p2 = createNode(7);
    p3 = createNode(13);
    p4 = createNode(11);

    p->left = p1;
    p->right = p2;
    p2->left = p3;
    p2->right = p4;

    preOrder(p);
    return 0 ;

}