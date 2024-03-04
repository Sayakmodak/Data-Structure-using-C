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

void postOrder(struct Node *root){
    if(root!=NULL){ // Until it reaches the leaf node
        postOrder(root->left);
        postOrder(root->right);
        printf("%d ",root->data);
    }
}
int main(){
    struct Node *p;
    struct Node *p1;
    struct Node *p2;
    struct Node *p3;
    struct Node *p4;

     //      4
    //     / \
    //    1  6
    //   / \
    //  5  2  

    p = createNode(4);
    p1 = createNode(1);
    p2 = createNode(6);
    p3 = createNode(5);
    p4 = createNode(2);

    p->left = p1;
    p->right = p2;
    p1->left = p3;
    p1->right = p4;

    postOrder(p);
    return 0 ;

}