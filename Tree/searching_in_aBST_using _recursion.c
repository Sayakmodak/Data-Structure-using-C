#include<stdio.h>
#include<stdlib.h>

struct Node {
    int data;
    struct Node *left;
    struct Node *right;
};
struct Node *createNode(int data){
    struct Node *ptr = (struct Node *)malloc(sizeof(struct Node));
    ptr->data = data;
    ptr->left = NULL;
    ptr->right = NULL;
}
void inOrder(struct Node *root){
    if(root!=NULL){
        inOrder(root->left);
        printf("%d ",root->data);
        inOrder(root->right);
    }
}
int isBST(struct Node *root){
    static struct Node *prev = NULL;
    if(root!=NULL){
        if(!isBST(root->left)){
            return 0;
        }
        if(prev!=NULL && root->data <=prev->data){
            return 0;
        }
        prev = root;
        return isBST(root->right);
    }
    else{
        return 1;
    }
}

struct Node *recursiveSearh(struct Node *root, int key){
    if(root==NULL){
        return NULL;
    }
    if(root->data == key){
        return root;
    }
    else if(key<root->data){
        return recursiveSearh(root->left,key);
    }
    return recursiveSearh(root->right,key);
}

struct Node *iterativeSearch(struct Node *root,int key){
    while(root!=NULL){
        if(root->data = key){
            return root;
        }
        else if(key<root->data){
            root = root->left;
        }
        else{
            root = root->right;
        }
    }
    return NULL;
}
int main(){
    struct Node *p1 = createNode(50);
    struct Node *p2 = createNode(40);
    struct Node *p3 = createNode(60);
    struct Node *p4 = createNode(20);
    struct Node *p5 = createNode(45);
    struct Node *p6 = createNode(55);
    struct Node *p7 = createNode(70);

    p1->left = p2; 
    p1->right = p3; 
    p2->left = p4; 
    p2->right = p5; 
    p3->left = p6; 
    p3->right = p7; 

    inOrder(p1);

    if(isBST(p1)){
        printf("Yes");
    }
    else{
        printf("No");
    }

    
    return 0;
}