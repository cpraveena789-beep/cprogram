#include <stdio.h>
#define MAX 10

int front = -1, rear = -1;
char queue[MAX][10];

void enqueue(char job[]) {
    if (rear == MAX - 1) {
        printf("Queue Full\n");
        return;
    }
    if (front == -1)
        front = 0;
    rear++;
    int i = 0;
    while ((queue[rear][i] = job[i]) != '\0')
        i++;
}

void dequeue() {
    if (front == -1 || front > rear) {
        printf("No jobs pending\n");
        return;
    }
    printf("Job printed: %s\n", queue[front++]);
}

void displayFront() {
    if (front == -1 || front > rear)
        printf("No jobs pending\n");
    else
        printf("Next job: %s\n", queue[front]);
}

int main() {
    enqueue("J1");
    enqueue("J2");
    enqueue("J3");

    dequeue();
    displayFront();

    return 0;
}
