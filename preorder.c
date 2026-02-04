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
    printf("%s\n",root->data);
    preorder(root->left);
    preorder(root->right);
}
int main() {
    struct node* root = createnode("PRODUCT");
    root->left = createnode("Electronics");
    root->right = createnode("Clothing");
    root->left->left = createnode("Mobiles");
    root->left->right = createnode("Laptops");
    root->right->left = createnode("Saree");
    root->right->right = createnode("Chudi");
    
    printf("Main category:%s\n",root->data);
   
    printf("Electronics sub2:%s\n",root->left->right->data);
     printf("Clothing sub1:%s",root->right->left->data);
    printf("preorder traversal:\n   ");
    preorder(root);
    return 0;
}