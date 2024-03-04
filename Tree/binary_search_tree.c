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

void inOrder(struct Node *root){
    if(root!=NULL){ // Until it reaches the leaf node
        inOrder(root->left);
        printf("%d ",root->data);
        inOrder(root->right);
    }
}
int BST(struct Node *root){
    static struct Node *next = NULL;

    if(root!=NULL){
        if(!BST(root->left)){
            return 0;
        }
        if(next != NULL && root->data <= next->data){
            return 0;
        }
        next = root ;
        return BST(root->right) ;
    }
    else{
        return 1;
    }
}


int main(){
    struct Node *p;
    struct Node *p1;
    struct Node *p2;
    struct Node *p3;
    struct Node *p4;

     //     5
    //     / \
    //    3  6
    //   / \
    //  1   4  

    p = createNode(5);
    p1 = createNode(3);
    p2 = createNode(6);
    p3 = createNode(1);
    p4 = createNode(4);

    p->left = p1;
    p->right = p2;
    p1->left = p3;
    p1->right = p4;

    inOrder(p);

    if(BST(p)){
        printf("Yes");
    }
    else{
        printf("Not");
    }
    return 0 ;

}