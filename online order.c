#include <stdio.h>
#include <stdlib.h>

struct node {
    int orderID;
    struct node *next;
};

struct node *front = NULL, *rear = NULL;

void enqueue(int id) {
    struct node *new = malloc(sizeof(struct node));
    new->orderID = id;
    new->next = NULL;

    if (rear == NULL)
        front = rear = new;
    else {
        rear->next = new;
        rear = new;
    }
}

void dequeue() {
    if (front == NULL) {
        printf("No orders pending\n");
        return;
    }
    struct node *temp = front;
    printf("Order processed: %d\n", front->orderID);
    front = front->next;
    free(temp);
}

void displayFront() {
    if (front == NULL)
        printf("No orders pending\n");
    else
        printf("Next order: %d\n", front->orderID);
}

int main() {
    enqueue(101);
    enqueue(102);
    enqueue(103);

    dequeue();
    displayFront();

    return 0;
}

