#include <stdio.h>
#include <stdlib.h>

struct node {
    int id;
    struct node *next;
};

struct node *front = NULL, *rear = NULL;

void enqueue(int id) {
    struct node *new = malloc(sizeof(struct node));
    new->id = id;
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
        printf("No patients waiting\n");
        return;
    }
    struct node *temp = front;
    printf("Patient attended: %d\n", front->id);
    front = front->next;
    free(temp);
}

void displayFront() {
    if (front == NULL)
        printf("No patients waiting\n");
    else
        printf("Next patient: %d\n", front->id);
}

int main() {
    enqueue(1);
    enqueue(2);
    enqueue(3);

    dequeue();
    displayFront();

    return 0;
}
