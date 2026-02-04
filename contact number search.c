#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int contacts[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &contacts[i]);
    }

    int key;
    scanf("%d", &key);

    int found = 0;

    for (int i = 0; i < n; i++) {
        if (contacts[i] == key) {
            found = 1;
            break;
        }
    }

    if (found)
        printf("Contact found");
    else
        printf("Contact not found");

    return 0;
}
