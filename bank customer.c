#include <stdio.h>
#include <stdlib.h>

struct Contact {
    long long phone;
};

struct Customer {
    int accNo;
    struct Contact c;
    struct Customer *next;
};

int main() {
    struct Customer *head = NULL, *temp = NULL, *newNode;
    int n = 2;

    for (int i = 0; i < n; i++) {
        newNode = (struct Customer *)malloc(sizeof(struct Customer));

        scanf("%d %lld", &newNode->accNo, &newNode->c.phone);
        newNode->next = NULL;

        if (head == NULL) {
            head = temp = newNode;
        } else {
            temp->next = newNode;
            temp = newNode;
        }
    }

    temp = head;
    while (temp != NULL) {
        printf("%d - %lld -> ", temp->accNo, temp->c.phone);
        temp = temp->next;
    }
    printf("NULL");

    return 0;
}
