#include <stdio.h>
#define MAX 10

int stack[MAX];
int top = -1;

void push(int pageID) {
    if (top == MAX - 1) {
        printf("History full\n");
        return;
    }
    stack[++top] = pageID;
}

void pop() {
    if (top == -1) {
        printf("No page to go back\n");
        return;
    }
    printf("Back pressed, removed page: %d\n", stack[top--]);
}

void peek() {
    if (top == -1)
        printf("No current page\n");
    else
        printf("Current page: %d\n", stack[top]);
}

int size() {
    return top + 1;
}

int main() {
    push(101);
    push(102);
    push(103);

    pop();
    peek();

    printf("Total pages in history: %d\n", size());
    return 0;
}
