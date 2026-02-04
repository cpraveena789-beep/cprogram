#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *left;
    struct node *right;
};

struct node* createnode(int value){
    struct node *newnode=(struct node*)malloc(sizeof(struct node));
   
    newnode->data = value;
    newnode->left = NULL;
    newnode->right = NULL;
    
    
    return newnode;
}

int main(){
    struct node* root = createnode(10);
    root->left = createnode(20);
    root->right = createnode(30);
    root->left->left = createnode(40);
    root->left->right = createnode(50);
    
    root->right->left =createnode(60);
    root->right->right =createnode(60);
    
    printf("Root value: %d\n",root);
    printf("value at root->left->right; %d\n",root->left->right);
    
    return 0;
}