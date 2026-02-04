#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct Node{
    char name[20];
    struct Node *left;
    struct Node *right;
};
struct Node* createNode(char value[]){
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    strcpy(newNode->name,value);
    newNode->left=NULL;
    newNode->right=NULL;
    return newNode;
}
int main(){
    struct Node* root = createNode("John");
    root->left=createNode("David");
    root->right=createNode("Peter");
    
    root->left->left=createNode("Chris");
    root->left->right=createNode("Alex");
    
     printf("Grandparent:%s\n",root->name);
     printf("First Child:%s\n",root->left->name);
     printf("Second Grandchild:%s\n",root->left->right->name);
    return 0;
    
}