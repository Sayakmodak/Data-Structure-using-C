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

int Bst(struct Node *root){
    static struct Node *next = NULL;
    if(root!=NULL){
        if(!Bst(root->left)){
            return 0;
        }
        if(next!=NULL && root->data <= next->data){
            return 0;
        }
        next = root;
        return Bst(root->right);
    }
    else{
        return 1;
    }
}

struct Node *recursiveSearch(struct Node *root, int key){
    if(root==NULL){
        return NULL;
    }
    if(root->data == key){
        return root;
    }
    else if (key < root->data )
    {
        return recursiveSearch(root->left,key);
    }
    else{
        return recursiveSearch(root->right,key);
    }
    
}

struct Node *iterativeSearch(struct Node *root,int key){
    
    while(root!=NULL){
        if(root->data == key){
        return root;
    }
    else if(root->data <key){
        root = root->right;
    }
    else{
        root = root->left;
    }
    }
    return NULL;
}
int main(){
    struct Node *p;
    struct Node *p1;
    struct Node *p2;
    struct Node *p3;
    struct Node *p4;

    //      5
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
    if(Bst(p)){
        printf("Yes");
    }
    else{
        printf("No");
    }
    
    /*struct Node *search = recursiveSearch(p,1);
    if(search!=NULL){
        printf("\nFound %d ",search->data);
    }
    else{
        printf("\nNot found...");
    }*/

    struct Node *search = iterativeSearch(p,6);
    if(search != NULL){
        printf("Found %d ",search->data);
    }
    else{
        printf("\nNot Found...");
    }
    
    return 0 ;

}