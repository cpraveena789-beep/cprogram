#include <stdio.h>
#include <stdlib.h>

struct Node {
    int roll;
    struct Node *next;
};

int main() {
    struct Node *head = NULL, *temp, *newnode;
    int n, i, value;

    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        scanf("%d", &value);

        newnode = (struct Node *)malloc(sizeof(struct Node));
        newnode->roll = value;
        newnode->next = NULL;

        if (head == NULL) {
            head = newnode;
            temp = head;
        } else {
            temp->next = newnode;
            temp = newnode;
        }
    }

    temp = head;
    while (temp != NULL) {
        printf("Roll %d -> ", temp->roll);
        temp = temp->next;
    }
    printf("NULL");

    return 0;
}             