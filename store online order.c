#include <stdio.h>
#include <stdlib.h>

struct Product {
    char name[20];
    float price;
};

struct Order {
    int orderID;
    struct Product p;
    char status[15];
    struct Order *next;
};

int main() {
    struct Order *head = NULL, *temp = NULL, *newNode;
    int n = 2;

    for (int i = 0; i < n; i++) {
        newNode = (struct Order *)malloc(sizeof(struct Order));

        scanf("%d %s %f %s",
              &newNode->orderID,
              newNode->p.name,
              &newNode->p.price,
              newNode->status);
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
        printf("%d %s %.0f %s -> ",temp->orderID,temp->p.name,temp->p.price,temp->status);
        temp = temp->next;
    }
    printf("NULL");

    return 0;
}
