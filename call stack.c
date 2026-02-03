#include <stdio.h>
#include <stdlib.h>

struct node {
    int funcID;
    struct node *next;
};

struct node *top = NULL;
int count = 0;

void push(int id) {
    struct node *newNode = malloc(sizeof(struct node));
    newNode->funcID = id;
    newNode->next = top;
    top = newNode;
    count++;
}

void pop() {
    if (top == NULL) {
        printf("Program finished\n");
        return;
    }
    struct node *temp = top;
    printf("Function ended: %d\n", temp->funcID);
    top = top->next;
    free(temp);
    count--;
}

void peek() {
    if (top == NULL)
        printf("No active function\n");
    else
        printf("Current function: %d\n", top->funcID);
}

int main() {
    push(1); 
    push(2); 
    push(3); 

    pop();
    peek();

    return 0;
}
