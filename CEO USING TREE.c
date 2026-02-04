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
    struct Node* root = createNode("CEO");
    root->left=createNode("Manager1");
    root->right=createNode("Manager2");
    
    root->left->left=createNode("TeamLeader1");
    root->left->right=createNode("TeamLeader2");
    
     printf("CEO:%s\n",root->name);
     printf("Left Manager:%s\n",root->left->name);
     printf("Right Team Lead under Manager1:%s\n",root->left->right->name);
    return 0;
    
}