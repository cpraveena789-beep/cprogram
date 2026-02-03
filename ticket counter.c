#include <stdio.h>
#define MAX 10

int queue[MAX];
int front = -1, rear = -1;

void enqueue(int id) {
    if (rear == MAX - 1) {
        printf("Queue is full\n");
        return;
    }
    if (front == -1)
        front = 0;
    queue[++rear] = id;
}

void dequeue() {
    if (front == -1 || front > rear) {
        printf("Queue is empty\n");
        return;
    }
    printf("Customer served: %d\n", queue[front++]);
}

void displayFront() {
    if (front == -1 || front > rear)
        printf("Queue is empty\n");
    else
        printf("Next customer: %d\n", queue[front]);
}

void size() {
    if (front == -1)
        printf("Queue size: 0\n");
    else
        printf("Queue size: %d\n", rear - front + 1);
}

int main() {
    enqueue(101);
    enqueue(102);
    enqueue(103);

    dequeue();
    displayFront();
    size();

    return 0;
}
