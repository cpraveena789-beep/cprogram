#include <stdio.h>
#include<stdlib.h>

struct node{
    char *data;
    struct node *left;
    struct node *right;
};

struct node *createnode(char *value){
    struct node* newnode = (struct node*)malloc(sizeof(struct node));
    if(newnode == NULL){
        printf("Allocataion failed");
        return NULL;
    }
    newnode->data = value;
    newnode->left = NULL;
    newnode->right = NULL;
    return newnode;
}
void preorder(struct node* root)
{
    if(root==NULL)
    return;
    printf("%c\n",root->data);
    preorder(root->left);
    preorder(root->right);
}
/*void inorder(struct node* root)
{
    if(root==NULL)
    return;
    inorder(root->left);
    printf("%d\n",root->data);
    inorder(root->right);
}*/

int main() {
    struct node* root = createnode("*");
    root->left = createnode("+");
    root->right = createnode("C");
    root->left->left = createnode("A");
    root->left->right = createnode("B");
    
    
   
    printf("Inorder traversal:\n");
    preorder(root);
    return 0;
}
