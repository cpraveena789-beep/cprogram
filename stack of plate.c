#include <stdio.h>
#include <stdlib.h>

struct node {
    int plateID;
    struct node *next;
};

struct node *top = NULL;
int count = 0;

void push(int id) {
    struct node *newNode = malloc(sizeof(struct node));
    newNode->plateID = id;
    newNode->next = top;
    top = newNode;
    count++;
}

void pop() {
    if (top == NULL) {
        printf("No plates to remove\n");
        return;
    }
    struct node *temp = top;
    printf("Plate removed: %d\n", temp->plateID);
    top = top->next;
    free(temp);
    count--;
}

void peek() {
    if (top == NULL)
        printf("No plates\n");
    else
        printf("Top plate: %d\n", top->plateID);
}

int main() {
    push(1); 
    push(2); 
    push(3); 

    pop();
    peek();

    return 0;
}
