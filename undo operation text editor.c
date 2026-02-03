#include <stdio.h>
#define MAX 10

int stack[MAX];
int top = -1;

void push(int action) {
    if (top == MAX - 1) {
        printf("Undo stack full\n");
        return;
    }
    stack[++top] = action;
}

void pop() {
    if (top == -1) {
        printf("Nothing to undo\n");
        return;
    }
    printf("Undo action: %d\n", stack[top--]);
}

void peek() {
    if (top == -1)
        printf("No actions\n");
    else
        printf("Last action: %d\n", stack[top]);
}

int main() {
    push(1); 
    push(2); 
    push(3); 
    pop();
    peek();

    return 0;
}
